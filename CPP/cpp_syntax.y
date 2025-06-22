%{
#include <iostream>
#include <cstdlib>
#include "SymbolTable.cpp"

extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern int line_count;
extern int error_count;
extern FILE *errors;

void yyerror(const char *s) {
    fprintf(errors, "Line %d: Syntax error: %s\n", line_count, s);
    IncError();
}

%}

%union {
    SymbolInfo* s;
}

%token <s> ID CONST_INT CONST_FLOAT CONST_CHAR
%token <s> ADDOP MULOP RELOP LOGICOP
%token INCOP DECOP ASSIGNOP NOT
%token LPAREN RPAREN LCURL RCURL LTHIRD RTHIRD COMMA SEMICOLON
%token IF ELSE FOR WHILE DO BREAK INT CHAR FLOAT DOUBLE VOID 
%token RETURN SWITCH CASE DEFAULT CONTINUE PRINTLN

%right ASSIGNOP
%left LOGICOP
%left RELOP
%left ADDOP
%left MULOP
%right NOT
%right UNARY
%left INCOP DECOP

%start program

%%

program
    : program declaration
    | program function
    | /* empty */
    ;

declaration
    : type ID SEMICOLON
    | type ID LTHIRD RTHIRD SEMICOLON
    | type ID LTHIRD CONST_INT RTHIRD SEMICOLON
    ;

type
    : INT
    | CHAR
    | FLOAT
    | DOUBLE
    | VOID
    ;

function
    : type ID LPAREN parameters RPAREN compound_stmt
    ;

parameters
    : parameter_list
    | /* empty */
    ;

parameter_list
    : parameter
    | parameter_list COMMA parameter
    ;

parameter
    : type ID
    | type ID LTHIRD RTHIRD
    ;

compound_stmt
    : LCURL stmt_list RCURL
    ;

stmt_list
    : stmt_list stmt
    | /* empty */
    ;

stmt
    : expr_stmt
    | compound_stmt
    | selection_stmt
    | iteration_stmt
    | jump_stmt
    | declaration
    | print_stmt
    ;

expr_stmt
    : expr SEMICOLON
    | SEMICOLON
    ;

selection_stmt
    : IF LPAREN expr RPAREN stmt
    | IF LPAREN expr RPAREN stmt ELSE stmt
    | SWITCH LPAREN expr RPAREN LCURL case_list RCURL
    ;

case_list
    : case_stmt case_list
    | /* empty */
    ;

case_stmt
    : CASE CONST_INT ':' stmt_list
    | DEFAULT ':' stmt_list
    ;

iteration_stmt
    : WHILE LPAREN expr RPAREN stmt
    | DO stmt WHILE LPAREN expr RPAREN SEMICOLON
    | FOR LPAREN expr_stmt expr_stmt expr RPAREN stmt
    ;

jump_stmt
    : BREAK SEMICOLON
    | CONTINUE SEMICOLON
    | RETURN SEMICOLON
    | RETURN expr SEMICOLON
    ;

print_stmt
    : PRINTLN LPAREN expr RPAREN SEMICOLON
    ;

expr
    : assignment_expr
    ;

assignment_expr
    : logical_expr
    | unary_expr ASSIGNOP assignment_expr
    ;

logical_expr
    : equality_expr
    | logical_expr LOGICOP equality_expr
    ;

equality_expr
    : relational_expr
    | equality_expr RELOP relational_expr
    ;

relational_expr
    : additive_expr
    | relational_expr RELOP additive_expr
    ;

additive_expr
    : multiplicative_expr
    | additive_expr ADDOP multiplicative_expr
    ;

multiplicative_expr
    : unary_expr
    | multiplicative_expr MULOP unary_expr
    ;

unary_expr
    : postfix_expr
    | ADDOP unary_expr %prec UNARY
    | INCOP unary_expr
    | DECOP unary_expr
    | NOT unary_expr
    ;

postfix_expr
    : primary_expr
    | postfix_expr INCOP
    | postfix_expr DECOP
    | postfix_expr LPAREN args RPAREN
    | postfix_expr LTHIRD expr RTHIRD
    ;

primary_expr
    : ID
    | CONST_INT
    | CONST_FLOAT
    | CONST_CHAR
    | LPAREN expr RPAREN
    ;

args
    : expr_list
    | /* empty */
    ;

expr_list
    : expr
    | expr_list COMMA expr
    ;

%%

int main(int argc, char *argv[]) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            std::cerr << "Error opening file: " << argv[1] << std::endl;
            return 1;
        }
    }
    
    errors = fopen("syntax_errors.txt", "w");
    if (!errors) {
        std::cerr << "Error creating error log file" << std::endl;
        return 1;
    }
    
    yyparse();
    
    fclose(errors);
    if (yyin != stdin) fclose(yyin);
    
    return 0;
}