# SinkedSea

Requirements:

CMake 3.7
antlr4-cpp-runtime 4.8

Build Instructions:
Create directory `build`

Within the `build` directory, run `cmake ../`
Then run `make` to build

Run instructions:
You should now have binary `build/test_antlr`. To use, simply run `build/test_antlr FILE` where `FILE` is any source file.

There are some example source files in `tests`. Currently, `test_antlr` only prints the AST tree and any syntax errors