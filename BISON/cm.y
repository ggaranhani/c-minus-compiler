/****************************************************/
/* File: cms.y                                      */
/*                                                  */
/*                                                  */
/*                                                  */
/* Gabriel Garanhani de Campos                      */
/****************************************************/

%{
    #define YYPARSER    
    #include "globals.h"
    #include "util.h"
    #include "scan.h"
    #include "parse.h"

    #define YYSTYPE TreeNode *
    int yyerror(char *msg);
    static TreeNode * savedTree;   
    static int yylex(void);
%}
   
%token ELSE IF INT RETURN VOID WHILE
%token PLUS MINUS TIMES OVER LT LTE GT GTE EQ NE ASSIGN SEMI COMMA LPAREN RPAREN LBRACKET RBRACKET LKEYS RKEYS
%token NUM ID
%token ERROR ENDFILE
%% 

program             :   list_declaration { 
                                savedTree = $1; 
                            }
                    ;

list_declaration    :   list_declaration declaration { 
                            YYSTYPE t = $1;
                            if(t != NULL) {     
                                while(t->sibling != NULL)
                                    t = t->sibling;
                                t->sibling = $2;
                                $$ = $1;
                            }
                            else
                                $$ = $2;
                        }
                    |   declaration { 
                            $$ = $1;
                        }
                    ;

declaration         :   var_declaration { 
                            $$ = $1;
                        }
                    |   fun_declaration { 
                            $$ = $1;
                        }
                    ;

var_declaration     :   INT identifier SEMI {
                            //o tipo de expressao é expressao de tipo (TypeK)
                            $$ = newExpNode(TypeK);
                            //do tipo INT
                            $$->type = Integer;
                            //de nome "integer"
                            $$->attr.name = "integer";
                            $$->child[0] = $2;
                            $2->type = Integer;
                            //filho é statement da variavel
                            $2->nodekind = StmtK;
                            //tipo de statement é de variavel
                            $2->kind.stmt = VarK;
                        }
                    |   INT identifier LBRACKET num RBRACKET SEMI {     
                            $$ = newExpNode(TypeK);
                            $$->type = Integer;
                            $$->attr.name = "integer";
                            $$->child[0] = $2;
                            $2->type = Integer;
                            $2->nodekind = StmtK;
                            $2->kind.stmt = VecK;
                            $2->attr.val = $4->attr.val;
                        }
                    ;

fun_declaration     :   INT identifier LPAREN params RPAREN compound_decl {   
                            $$ = newExpNode(TypeK);
                            $$->type = Integer;
                            $$->attr.name = "integer";
                            $$->child[0] = $2;
                            $2->type = Integer;
                            $2->nodekind = StmtK;
                            $2->kind.stmt = FuncK;
                            $2->child[0] = $4;
                            $2->child[1] = $6;
                            aggScope($2->child[0], $2->attr.name);
                            aggScope($2->child[1], $2->attr.name);
                        }
                    |   VOID identifier LPAREN params RPAREN compound_decl {   
                            $$ = newExpNode(TypeK);
                            $$->type = Void;
                            $$->attr.name = "VOID";
                            $$->child[0] = $2;
                            $2->type = Void;
                            $2->nodekind = StmtK;
                            $2->kind.stmt = FuncK;
                            $2->child[0] = $4;
                            $2->child[1] = $6;
                            aggScope($2->child[0], $2->attr.name);
                            aggScope($2->child[1], $2->attr.name);
                        }
                    ;

params              :   param_list { 
                            $$ = $1;
                        }
                    |   VOID {}
                    ;

param_list          :   param_list COMMA param { 
                            YYSTYPE t = $1;
                            if(t != NULL) {     
                                while(t->sibling != NULL)
                                    t = t->sibling;
                                t->sibling = $3;
                                $$ = $1;
                            }
                            else
                                $$ = $3;
                        }
                    |   param { 
                            $$ = $1;
                        }
                    ;

param               :   INT identifier {
                            $$ = newExpNode(TypeK);
                            $$->type = Integer;
                            $$->attr.name = "integer";
                            $$->child[0] = $2;
                            $2->nodekind = StmtK;
                            $2->kind.stmt = VarK;
                            $2->type = Integer;
                        }
                    |  INT identifier LBRACKET RBRACKET {     
                            $$ = newExpNode(TypeK);
                            $$->type = Integer;
                            $$->attr.name = "integer";
                            $$->child[0] = $2;
                            $2->nodekind = StmtK;
                            $2->kind.stmt = VecK;
                            $2->type = Integer;
                        }
                    ;

compound_decl       :   LKEYS local_declarations statement_list RKEYS { 
                            YYSTYPE t = $2;
                            if(t != NULL){     
                                while(t->sibling != NULL)
                                    t = t->sibling;
                                t->sibling = $3;
                                $$ = $2;
                            }
                            else
                                $$ = $3;
                        }
                    |   LKEYS local_declarations RKEYS { 
                            $$ = $2;
                        }
                    |   LKEYS statement_list RKEYS { 
                            $$ = $2;
                        }
                    |   LKEYS RKEYS {}
                    ;

local_declarations   :   local_declarations var_declaration { 
                            YYSTYPE t = $1;
                            if(t != NULL){     
                                while(t->sibling != NULL)
                                    t = t->sibling;
                                t->sibling = $2;
                                $$ = $1;
                            }
                            else
                                $$ = $2;
                        }
                    |   var_declaration {
                            $$ = $1;
                        }
                    ;

statement_list     :   statement_list statement { 
                            YYSTYPE t = $1;
                            if(t != NULL) {     
                                while(t->sibling != NULL)
                                    t = t->sibling;
                                t->sibling = $2;
                                $$ = $1;
                            }
                            else
                                $$ = $2;
                        }
                    |   statement {
                            $$ = $1;
                        }
                    ;

statement           :   expression_decl {
                            $$ = $1;
                        }
                    |   compound_decl {
                            $$ = $1;
                        }
                    |   selection_decl {
                            $$ = $1;
                        }
                    |   iterator_decl {
                            $$ = $1;
                        }
                    |   return_decl {
                            $$ = $1;
                        }
                    ;

expression_decl     :   expression SEMI {
                            $$ = $1;
                        }
                    |   SEMI {}
                    ;

selection_decl      :   IF LPAREN expression RPAREN statement { 
                            $$ = newStmtNode(IfK);
                            $$->child[0] = $3;
                            $$->child[1] = $5;
                        }
                    |   IF LPAREN expression RPAREN statement ELSE statement { 
                            $$ = newStmtNode(IfK);
                            $$->child[0] = $3;
                            $$->child[1] = $5;
                            $$->child[2] = $7;
                        }
                    ;

iterator_decl       :   WHILE LPAREN expression RPAREN statement { 
                            $$ = newStmtNode(WhileK);
                            $$->child[0] = $3;
                            $$->child[1] = $5;
                        }
                    ;

return_decl         :   RETURN SEMI { 
                            $$ = newStmtNode(ReturnK);
                        }
                    |   RETURN expression SEMI { 
                            $$ = newStmtNode(ReturnK);
                            $$->child[0] = $2;
                        }
                    ;

expression          :   var ASSIGN expression { 
                            $$ = newStmtNode(AssignK);
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                        }
                    |   simple_expression { 
                            $$ = $1;
                        }
                    ;

var                 :   identifier { 
                            $$ = $1;
                            $$->type=Integer;
                        }
                    |   identifier LBRACKET expression RBRACKET { 
                            $$ = $1;
                            $$->kind.exp = VecIndexK;
                            $$->child[0] = $3;
                            $$->type=Integer;
                        }
                    ;

simple_expression   :   sum_expression relational sum_expression { 
                            $$ = $2;
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                        }
                    |   sum_expression { 
                            $$ = $1;
                        }
                    ;

relational          :   EQ { 
                            $$ = newExpNode(OpK);
                            $$->attr.op = EQ;
                            $$->type=Boolean;
                            $$->attr.name = "==";                           
                        }
                    |   NE { 
                            $$ = newExpNode(OpK);
                            $$->attr.op = NE;  
                            $$->type=Boolean;
                            $$->attr.name = "!=";                           
                        }
                    |   LT { 
                            $$ = newExpNode(OpK);
                            $$->attr.op = LT; 
                            $$->type=Boolean;
                            $$->attr.name = "<";                            
                        }
                    |   LTE { 
                            $$ = newExpNode(OpK);
                            $$->attr.op = LTE; 
                            $$->type=Boolean; 
                            $$->attr.name = "<=";                           
                        }
                    |   GT { 
                            $$ = newExpNode(OpK);
                            $$->attr.op = GT;  
                            $$->type=Boolean; 
                            $$->attr.name = ">";                          
                        }
                    |   GTE { 
                            $$ = newExpNode(OpK);
                            $$->attr.op = GTE;  
                            $$->type=Boolean;
                            $$->attr.name = ">=";                           
                        }
                    ;

sum_expression      :   sum_expression sum term { 
                            $$ = $2;
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                        }
                    |   term {
                            $$ = $1;
                        }
                    ;

sum                 :   PLUS { 
                            $$ = newExpNode(OpK);
                            $$->attr.op = PLUS; 
                            $$->type=Integer;  
                            $$->attr.name = "+";                          
                        }
                    |   MINUS { 
                            $$ = newExpNode(OpK);
                            $$->attr.op = MINUS;   
                            $$->type=Integer; 
                            $$->attr.name = "-";                        
                        }
                    ;

term                :   term mult fator { 
                            $$ = $2;
                            $$->child[0] = $1;
                            $$->child[1] = $3;
                        }
                    |   fator { 
                            $$ = $1;
                        }
                    ;

mult                :   TIMES {     
                            $$ = newExpNode(OpK);
                            $$->attr.op = TIMES;
                            $$->attr.name = "*";
                            $$->type = Integer;                         
                        }
                    |   OVER {     
                            $$ = newExpNode(OpK);
                            $$->attr.op = OVER;
                            $$->attr.name = "/";
                            $$->type = Integer;                          
                        }
                    ;

fator               :   LPAREN expression RPAREN { 
                            $$ = $2;
                        }
                    |   var { 
                            $$ = $1;
                        }
                    |   activation { 
                            $$ = $1;
                        }
                    |   num { 
                            $$ = $1;
                        }
                    ;

activation            :   identifier LPAREN arg_lista RPAREN { 
                            $$ = $1;
                            $$->child[0] = $3;
                            $$->kind.exp = CallK;
                        }
                    |   identifier LPAREN RPAREN { 
                            $$ = $1;
                            $$->kind.exp = CallK;
                        }
                    ;

arg_lista           :   arg_lista COMMA expression { 
                            YYSTYPE t = $1;
                            if(t != NULL){     
                                while(t->sibling != NULL)
                                    t = t->sibling;
                                t->sibling = $3;
                                $$ = $1;
                            }
                            else
                                $$ = $3;
                        }
                    |   expression { 
                            $$ = $1;
                        }
                    ;

identifier          :   ID { 
                            $$ = newExpNode(IdK);
                            $$->attr.name = copyString(tokenString);
                        }
                    ;

num                 :   NUM { 
                            $$ = newExpNode(ConstK);
                            $$->attr.val = atoi(tokenString);
                            $$->type=Integer;
                        }
                    ;

%%

int yyerror(char * message) { 
    fprintf(listing,"Syntax error at line %d: %s\n", lineno, message);
    fprintf(listing,"Current token: ");
    printToken(yychar, tokenString);
    Error = TRUE;
    return 0;
}

static int yylex(void){
    return getToken();
}

TreeNode * parse(void){
    yyparse();
    return savedTree;
}
