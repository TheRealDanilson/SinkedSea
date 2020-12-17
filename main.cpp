#include "antlr.cpp"

int main(int argc, const char *argv[])
{
    ifstream file;
    file.open(argv[1]);
    if (file.bad() || file.fail())
    {
        throw runtime_error("Invalid file!");
    }

    // Generate parse tree
    ANTLRInputStream input(file);
    SinkedSeaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    SinkedSeaParser parser(&tokens);
    tree::ParseTree *tree = parser.file();

    // Generate the AST that we'll use to actually run the program
    SinkedSea::Visitor visitor;
    SinkedSea::ThreadTree mainTree;
    mainTree.child = visitor.visit(tree).as<shared_ptr<SinkedSea::CommandTree>>();
    file.close();

    // Start the program in another thread
    mainTree.eval({});

    // Wait until all threads have terminated until exiting
    std::unique_lock<std::mutex> lk(SinkedSea::globalM);
    SinkedSea::globalCV.wait(lk, [] { return SinkedSea::globalCount == 0; });

    return 0;
}