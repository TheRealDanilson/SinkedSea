# SinkedSea
This is an interpreter for a simple programming language called `SinkedSea`, whose grammer is specified in `SinkedSea.g4`.

Requirements:

CMake 3.7
antlr4-cpp-runtime 4.8

Build Instructions:
Create directory `build`

Within the `build` directory, run `cmake ../`
Then run `make` to build

Run instructions:
You should now have binary `build/SinkedSea`. To use, simply run `build/SinkedSea FILE` where `FILE` is any source file.

There are some example source files in `examples`.