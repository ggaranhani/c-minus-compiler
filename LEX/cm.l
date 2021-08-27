/****************************************************/
/* File: cms.l                                      */
/*                                                  */
/*                                                  */
/*                                                  */
/* Gabriel Garanhani de Campos                      */
/****************************************************/

%{
    #include "globals.h"
    #include "util.h"
    #include "scan.h"
    /* lexeme of identifier or reserved word */
    char tokenString[MAXTOKENLEN+1];
    static int yylex(void);
%}

letter      [a-zA-Z]
digit       [0-9]
identifier  {letter}+
number      {digit}+
newline     \n
whitespace  [ \t]+

%option noyywrap
%%

"else"          { return ELSE; } 
"if"            { return IF; }
"int"		    { return INT; }
"return"	    { return RETURN; }
"void"		    { return VOID; }
"while"		    { return WHILE; }
"+"             { return PLUS; }
"-"             { return MINUS; }
"*"             { return TIMES; }
"/"             { return OVER; }
"<"             { return LT; }
"<="		    { return LTE; }
">"		        { return GT; }
">="		    { return GTE; }
"=="            { return EQ; }
"!="	       	{ return NE; }
"="             { return ASSIGN; }
";"             { return SEMI; }
","		        { return COMMA; }
"("             { return LPAREN; }
")"             { return RPAREN; }
"["		        { return LBRACKET; }
"]"		        { return RBRACKET; }
"{"		        { return LKEYS; }
"}"		        { return RKEYS; }
"/*"            {                           //  + - * / < <= > >= == != = ; , () [] {} /* */ 
                    char c;
                    do { 
                        c = input();
                        if (c == EOF) break;
                        if (c == '\n') lineno++;
                        if (c == '*') { 
                            if(input() == '/')
                            break;
                        }		
                    } while (1);
                }
{number}        { return NUM; }
{identifier}    { return ID; }
{newline}       { lineno++; }
{whitespace}    {/* skip whitespace */}
.               { return ERROR; }

%%

TokenType getToken(void) {
    static int firstTime = TRUE;
    TokenType currentToken;
    if (firstTime) {
        firstTime = FALSE;
        lineno++;
        yyin = source;
        yyout = listing;
    }
    currentToken = yylex();
    strncpy(tokenString, yytext, MAXTOKENLEN);
    if (TraceScan) {
        fprintf(listing,"\t%d: ", lineno);
        printToken(currentToken, tokenString);
    }
    return currentToken;
}
