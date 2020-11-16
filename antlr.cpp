#include <string>
#include <iostream>
#include "antlr4-runtime/SinkedSeaLexer.h"
#include "antlr4-runtime/SinkedSeaParser.h"
#include "antlr4-runtime/SinkedSeaBaseListener.h"


using namespace std;
using namespace antlr4;
//using namespace SinkedSea;

int main(int argc, const char* argv[]) {
    ifstream file;
    file.open(argv[1]);

    ANTLRInputStream input(file);
    SinkedSeaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    SinkedSeaParser parser(&tokens);
    tree::ParseTree *tree = parser.file();
    cout << tree->toStringTree(true) << endl;

    file.close();
    return 0;
}
