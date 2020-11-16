# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)
PROJECT(SinkedSea)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 17)

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

set(ANTLR_EXECUTABLE /usr/share/java/antlr-complete.jar)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)

# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# add macros to generate ANTLR Cpp code from grammar
#find_package(ANTLR REQUIRED)

# include generated files in project environment
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime)
include_directories(/usr/include/antlr4-runtime)

# add generated grammar to binary target
add_executable(test_antlr antlr.cpp
               ${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime/SinkedSeaBaseListener.cpp
               ${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime/SinkedSeaBaseVisitor.cpp
               ${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime/SinkedSeaLexer.cpp
               ${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime/SinkedSeaParser.cpp
               ${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime/SinkedSeaVisitor.cpp
               ${CMAKE_CURRENT_SOURCE_DIR}/antlr4-runtime/SinkedSeaVisitor.cpp)
target_link_libraries(test_antlr antlr4-runtime)