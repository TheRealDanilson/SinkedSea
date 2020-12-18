# SinkedSea
This is an interpreter for a simple programming language called `SinkedSea`, whose grammar is specified in `SinkedSea.g4`.
`SinkedSea` is untyped, but supports integer, boolean, and channels natively. There's support for string literals, but no operations on them excepting printing.

Requirements:

CMake 3.7

antlr4-cpp-runtime 4.8 (download for Mac/Windows at https://www.antlr.org/download.html)

Build Instructions:
Create directory `build`

Within the `build` directory, run `cmake ../`
Then run `make` to build

Run instructions:
You should now have binary `build/SinkedSea`. To use, simply run `build/SinkedSea FILE` where `FILE` is any source file.

Demo:
Within the `examples` folder are programs that demo specific features of `SinkedSea`. These can be run without any modification.

`build/SinkedSea examples/atomic_increment.ss` Demonstrates multiple threads incrementing a global variable atomically using channels

`build/SinkedSea examples/channels.ss` Demonstrates basic channel functionality (sending/reading)

`build/SinkedSea examples/factorial.ss` Demonstrates the ability to write recursive functions, using the factorial function as an example

`build/SinkedSea examples/gcd.ss` Implementation of multiple gcd algorithms

`build/SinkedSea examples/race_conditions.ss` Demonstrates that threads indeed run in parallel by showing a possible race condition that occurs when incrementing a variable

`build/SinkedSea examples/syntax_errors.ss` Demonstrates basic syntax error reporting whenever a program is incorrectly written