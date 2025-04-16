%{
#include <stdio.h>
#include <stdlib.h>
#include "cpp_syntax.tab.h"

void yyerror(const char *s);
int yylex();
extern FILE *yyin;
extern int yylineno;  // Get line number from the lexer

int syntax_errors = 0; // Count syntax errors
%}

// Operator precedence to resolve shift/reduce conflicts
%right ASSIGNMENT_OP
%left LOGICAL_OP
%left RELATIONAL_OP
%left ARITHMETIC_OP
%left BITWISE_OP
%left DOT_OP ARROW_OP
%right ELSE // Ensures `else` binds to the closest `if`

// Tokens
%token PREPROCESSOR KEYWORD IDENTIFIER NUMBER HEXADECIMAL BINARY OCTAL FLOAT 
%token STRING_LITERAL CHAR_LITERAL RELATIONAL_OP ARITHMETIC_OP 
%token ASSIGNMENT_OP LOGICAL_OP BITWISE_OP
%token LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET SEMICOLON COMMA 
%token COLON SCOPE_RESOLUTION TERNARY ELLIPSIS SYMBOL
%token DOT_OP ARROW_OP
%token IF ELSE WHILE FOR RETURN

%%

// Main program
program:
    preprocessor program
    | function program
    | statement program
    | error program { 
        printf("Syntax Error on Line %d: Invalid syntax.\n", yylineno);
        syntax_errors++;
        yyclearin; yyerrok; // Recover and continue parsing
    }
    | /* empty */
    ;

// Handling #include, #define, etc.
preprocessor:
    PREPROCESSOR IDENTIFIER STRING_LITERAL
    ;

// Function definition
function:
    KEYWORD IDENTIFIER LPAREN RPAREN LBRACE statements RBRACE
    ;

// Statements inside function
statements:
    statements statement SEMICOLON
    | statement SEMICOLON
    | error SEMICOLON { 
        printf("Syntax Error on Line %d: Invalid statement.\n", yylineno);
        syntax_errors++;
        yyclearin; yyerrok; // Continue parsing after an error
    }
    ;

// Valid statements
statement:
    IDENTIFIER ASSIGNMENT_OP expression
    | IDENTIFIER DOT_OP IDENTIFIER
    | IDENTIFIER ARROW_OP IDENTIFIER
    | if_statement
    | loop_statement
    | return_statement
    ;

// If-Else condition (Fixed Conflicts)
if_statement:
    IF LPAREN expression RPAREN LBRACE statements RBRACE
    | IF LPAREN expression RPAREN LBRACE statements RBRACE ELSE LBRACE statements RBRACE %prec ELSE
    ;

// Loop (For/While)
loop_statement:
    WHILE LPAREN expression RPAREN LBRACE statements RBRACE
    | FOR LPAREN expression SEMICOLON expression SEMICOLON expression RPAREN LBRACE statements RBRACE
    ;

// Return statement
return_statement:
    RETURN expression SEMICOLON
    ;

// Expressions
expression:
    IDENTIFIER
    | NUMBER
    | HEXADECIMAL
    | BINARY
    | OCTAL
    | FLOAT
    | STRING_LITERAL
    | CHAR_LITERAL
    | expression ARITHMETIC_OP expression
    | expression RELATIONAL_OP expression
    | expression LOGICAL_OP expression
    | LPAREN expression RPAREN
    ;

%%

// Error handling function
void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error on Line %d: %s\n", yylineno, s);
    syntax_errors++;
}

// Main function
int main(int argc, char *argv[]) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            perror("Error opening file");
            return 1;
        }
        yyin = file;
    }

    printf("Starting Syntax Analysis...\n");
    yyparse();

    if (syntax_errors == 0)
        printf("Parsing successful! No syntax errors detected.\n");
    else
        printf("Parsing completed with %d syntax errors.\n", syntax_errors);

    if (yyin != NULL) fclose(yyin); // Close file if opened

    return 0;
}
