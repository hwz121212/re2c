#ifndef _RE2C_LIB_LEX_
#define _RE2C_LIB_LEX_

#include "msg/location.h"
#include "regexp/re.h"
#include "parse/ast.h"

namespace re2c {

int lex(const char *&pattern);
const AST *parse(const char *pattern);
extern const AST *regexp;

} // namespace re2c

#endif // _RE2C_LIB_LEX_
