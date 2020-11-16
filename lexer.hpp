#include <string>
#include <tuple>
#include <list>

using namespace std;

namespace lexer
{
    enum token {identifier, keyword, op, separator, literal};
    using Token = tuple<token, string>;

    // ParseFile returns a list of tokens from the file at name
    list<Token> ParseFile(string name);
}