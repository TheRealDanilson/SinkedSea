
// Generated from SinkedSea.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SinkedSeaParser.h"


namespace SinkedSea {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by SinkedSeaParser.
 */
class  SinkedSeaVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SinkedSeaParser.
   */
    virtual antlrcpp::Any visitParameters(SinkedSeaParser::ParametersContext *context) = 0;

    virtual antlrcpp::Any visitArguments(SinkedSeaParser::ArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitExpression(SinkedSeaParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCommand(SinkedSeaParser::CommandContext *context) = 0;

    virtual antlrcpp::Any visitFile(SinkedSeaParser::FileContext *context) = 0;


};

}  // namespace SinkedSea
