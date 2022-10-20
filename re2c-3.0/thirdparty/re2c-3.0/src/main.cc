#include <stdio.h>

#include "codegen/code.h"
#include "compile.h"
#include "msg/msg.h"
#include "msg/warn.h"
#include "options/opt.h"
#include "parse/input.h"
#include "parse/scanner.h"


using namespace re2c;

int main(int, char *argv[])
{
    conopt_t globopts;
    Msg msg;
    Opt opts(globopts, msg);

    switch (parse_opts(argv, globopts, opts, msg)) {
        case OK:        break;
        case EXIT_OK:   return 0;
        case EXIT_FAIL: return 1;
    }

    Scanner scanner(&globopts, msg);
    if (!scanner.open(globopts.source_file, NULL)) {
        return 1;
    }

    Output output(msg);

    compile(scanner, output, opts);

    if (!output.emit()) {
        return 1;
    }

    if (msg.warn.error()) {
        return 1;
    }

    if (!scanner.gen_dep_file()) {
        return 1;
    }

    if (globopts.verbose) {
        fprintf(stderr, "re2c: success\n");
    }
    return 0;
}
