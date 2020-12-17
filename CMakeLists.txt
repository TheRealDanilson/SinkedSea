# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)
PROJECT(SinkedSea)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 17)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Og -g" CACHE STRING "Set C++ Compiler Flags" FORCE)

find_package(Antlr4 REQUIRED)
include_directories(${ANTLR4_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime)

# add generated grammar to binary target
add_executable(SinkedSea main.cpp ast.cpp antlr.cpp channel.cpp
${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime/SinkedSeaBaseVisitor.cpp
${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime/SinkedSeaLexer.cpp
${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime/SinkedSeaListener.cpp 
${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime/SinkedSeaParser.cpp 
${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime/SinkedSeaVisitor.cpp)

target_link_libraries(SinkedSea antlr4-runtime pthread)