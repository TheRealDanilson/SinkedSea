grammar SinkedSea;

parameters
    : NAME ( ',' NAME )*
    ;

arguments
    : expression (',' expression)*
    |
    ;

expression
    : NAME
    | INT
    | BOOL
    | expression BOP expression
    | NAME '(' arguments ')'
    ;

command
    : NAME '=' expression ';'
    | NAME '(' parameters ')' '{' command* '}'
    | 'if' '(' expression ')' '{' command* '}' 'else' '{' command* '}'
    | 'if' '(' expression ')' '{' command* '}'
    | 'return' expression ';'
    | 'return' ';'
    | 'print' '(' expression ')' ';'
    ;

file : command* EOF;

NAME
    : [a-zA-Z][a-zA-Z0-9]*
    ;

INT
    : [0-9]+
    ;

BOOL
    : 'true'
    | 'false'
    ;

BOP
    : '+'
    | '-'
    | '*'
    | '&&'
    | '||'
    | '=='
    ;


WS : [ \t\r\n]+ -> skip ; // skip spaces, tabs, newlines