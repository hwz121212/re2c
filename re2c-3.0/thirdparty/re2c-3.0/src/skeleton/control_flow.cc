#include "util/c99_stdint.h"
#include <stdio.h>
#include <algorithm>
#include <map>
#include <memory>
#include <utility>
#include <valarray>
#include <vector>

#include "debug/debug.h"
#include "msg/msg.h"
#include "msg/warn.h"
#include "options/opt.h"
#include "regexp/rule.h"
#include "skeleton/path.h"
#include "skeleton/skeleton.h"
#include "util/u32lim.h"


namespace re2c {
namespace {

// See note [counting skeleton edges].
// A type for counting total size of default paths. Most real-world cases have
// only a few short paths. We don't need all paths anyway, just some examples.
typedef u32lim_t<1024> paths_size_t; // ~1Kb

struct StackItem {
    uint32_t node;
    Node::arcs_t::const_iterator arc;
};

static void fprint_default_arc(FILE *f, const Node::range_t *r)
{
    if (r->next == r && r->lower == r->upper) {
        fprintf(f, "\\x%X", r->lower);
    } else {
        fprintf(f, "[");
        const Node::range_t *r0 = r;
        do {
            fprintf(f, "\\x%X", r->lower);
            if (r->lower != r->upper) {
                fprintf(f, "-\\x%X", r->upper);
            }
            r = r->next;
        } while (r != r0);
        fprintf(f, "]");
    }
}

static void get_path_on_stack(path_t &path, std::vector<StackItem> &stack, size_t node)
{
    path.clear();
    if (!stack.empty()) {
        for (size_t i = 1; i < stack.size(); ++i) {
            path.push(stack[i].node);
        }
        path.push(node);
    }
}

} // anonymous namespace

void warn_undefined_control_flow(const Skeleton &skel)
{
    std::valarray<bool> loops(skel.nodes_count);
    std::vector<path_t> paths;
    paths_size_t size(paths_size_t::from32(0u));
    bool use_eof_rule = skel.opts->eof != NOEOF;

    std::vector<StackItem> stack;
    path_t path(0);

    StackItem i0 = {0, skel.nodes[0].arcs.begin()};
    stack.push_back(i0);

    while (!stack.empty()) {
        StackItem i = stack.back();
        stack.pop_back();
        const Node &node = skel.nodes[i.node];

        if (i.arc == node.arcs.begin()) {
            // DFS recursive enter
            if (node.rule != Rule::NONE && node.rule != skel.eof_rule) {
                // accepting path, terminate recursion
            }
            else if (node.end() || (use_eof_rule && node.rule == Rule::NONE)) {
                // found path to default state
                get_path_on_stack(path, stack, i.node);
                paths.push_back(path);
                size = size + paths_size_t::from64(path.len());
                if (size.overflow()) break;
            }
            else if (!loops[i.node]) {
                loops[i.node] = true;

                const uint32_t succ = static_cast<uint32_t>(i.arc->first);

                // reschedule this node with the next successor
                StackItem k = {i.node, ++i.arc};
                stack.push_back(k);

                // schedule the first successor node
                StackItem j = {succ, skel.nodes[succ].arcs.begin()};
                stack.push_back(j);
            }
        }
        else if (i.arc == node.arcs.end()) {
            // DFS recursive return
            loops[i.node] = false;
        }
        else {
            const uint32_t succ = static_cast<uint32_t>(i.arc->first);

            // reschedule this node with the next successor and updated distance
            StackItem k = {i.node, ++i.arc};
            stack.push_back(k);

            // schedule the current successor node
            StackItem j = {succ, skel.nodes[succ].arcs.begin()};
            stack.push_back(j);
        }
    }

    if (!paths.empty()) {
        skel.msg.warn.undefined_control_flow(skel, paths, size.overflow());
    }
    else if (size.overflow()) {
        skel.msg.warn.fail(Warn::UNDEFINED_CONTROL_FLOW, skel.loc,
            "DFA is too large to check undefined control flow");
    }
}

void fprint_default_path(FILE *f, const Skeleton &skel, const path_t &p)
{
    fprintf(f, "'");
    const size_t len = p.len();
    for (size_t i = 0; i < len; ++i) {
        if (i > 0) {
            fprintf(f, " ");
        }
        fprint_default_arc(stderr, p.arc(skel, i));
    }
    fprintf(f, "'");
}

} // namespace re2c
