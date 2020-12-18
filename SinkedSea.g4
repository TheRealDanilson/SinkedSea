grammar SinkedSea;

parameters
    : NAME ( ',' NAME )*
    |
    ;

arguments
    : expression (',' expression)*
    |
    ;

expression
    : BOOL
    | INT
    | NAME
    | NAME '(' arguments ')'
    | STR
    | expression MULT expression
    | expression op=(ADD | SUB) expression
    | expression LT expression
    | expression EQ expression
    | expression AND expression
    | expression OR expression
    | newChan
    | chanRead
    ;

newChan: 'new' 'chan';
chanRead: 'read' expression;

command
    : globalAssignment
    | localAssignment
    | assignment
    | declaration
    | if2
    | if1
    | returnE
    | print
    | whileLoop
    | thread
    | chanAssignment
    | expression ';'
    ;

globalAssignment : 'global' NAME '=' expression ';';
localAssignment : 'local' NAME '=' expression ';';
assignment : NAME '=' expression ';';
declaration : NAME '(' parameters ')' '{' command* '}';
com1 : command*;
com2 : command*;
if2 : 'if' '(' expression ')' '{' com1 '}' 'else' '{' com2 '}';
if1 : 'if' '(' expression ')' '{' com1 '}';
returnE : 'return' expression ';';
print: 'print' '(' expression ')' ';';
thread: 'thread' '(' expression ')' ';';
chanAssignment: expression '->' expression ';';

whileLoop: 'while' '(' expression ')' '{' command* '}';

file : command* EOF;

BOOL
    : 'true'
    | 'false'
    ;

NAME
    : [a-zA-Z][_a-zA-Z0-9]*
    ;

fragment
ESC: '\\"' | '\\\\';

STR
    : '"' (ESC | .)*? '"'
    ;

INT
    : [0-9]+
    | '-'[0-9]+
    ;

MULT: '*';
ADD : '+';
SUB : '-';
LT  :'<';
AND : '&&';
OR  : '||';
EQ  : '==';

WS : [ \t\r\n]+ -> skip ; // skip spaces, tabs, newlines
LINE_COMMENT : '//' ~[\r\n]* -> skip ;