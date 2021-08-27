#include "globals.h"
#include "symtab.h"
#include "analyze.h"

static int location = 0;

static void typeError(TreeNode * t, char * message) { 
    fprintf(listing,"Type error at line %d: %s\n", t->lineno, message);
    Error = TRUE;
}

static void nullProc(TreeNode * t) { 
    if (t==NULL) return;
    else return;
}

static void traverse(TreeNode * t,void (* preProc) (TreeNode *),void (* postProc) (TreeNode *)) { 
    if (t != NULL){ 
        preProc(t);
        {
         int i;
         for (i=0; i < MAXCHILDREN; i++)
            traverse(t->child[i],preProc,postProc);
        }
        postProc(t);
        traverse(t->sibling,preProc,postProc);
  }
}

static void insertNode( TreeNode * t) { 
    switch (t->nodekind) { 
        case StmtK:
            switch (t->kind.stmt) { 
                case VarK:
                    if(st_memloc(t->attr.name, t->scope) == -1 && st_memloc(t->attr.name, "global") == -1)
                        st_insert(t->attr.name, t->scope, variableT, Integer, t->lineno, location++);
                    else {
                        switch(st_idT(t->attr.name, t->scope)){
                            case functionT:
                                typeError(t, "Var has function id");
                                break;
                            case variableT:
                                typeError(t, "Var already declared");
                                break;
                            case vectorT:
                                typeError(t, "Var has array id");
                                break;
                        }
                    }
                    break;

                case VecK:
                    if(st_memloc(t->attr.name, t->scope) == -1 && st_memloc(t->attr.name, "global") == -1)
                        st_insert(t->attr.name, t->scope, vectorT, Integer, t->lineno, location++);
                    else{
                        switch(st_idT(t->attr.name, t->scope)){
                            case functionT:
                                typeError(t, "Array has function id");
                                break;
                            case vectorT:
                                typeError(t, "Array already declared");
                                break;
                            case variableT:
                                typeError(t, "Array has var id");
                                break;
                        }
                    }
                    break;

                case ReturnK: break;

                case FuncK:
                    if(st_memloc(t->attr.name, t->scope) == -1 && st_memloc(t->attr.name, "global") == -1) {
                        if(t->type == Integer)
                            st_insert(t->attr.name, t->scope, functionT, Integer, t->lineno, location++);
                        else
                            st_insert(t->attr.name, t->scope, functionT, Void, t->lineno, location++);
                    }
                    else {
                        switch(st_idT(t->attr.name, t->scope)){
                            case functionT:
                                typeError(t, "Function already declared");
                                break;
                            case variableT:
                                typeError(t, "Function has var id");
                                break;
                            case vectorT:
                                typeError(t, "Function has array id");
                                break;
                        }
                    }
                    break;
                default: break;
            }
            break;

        case ExpK:
            switch(t->kind.exp){
                case IdK:
                    if((st_memloc(t->attr.name, "global") == -1) && (st_memloc(t->attr.name, t->scope) == -1))
                        typeError(t, "Atribuição à variável não declarada anteriormente");
                    else if(st_memloc(t->attr.name, "global") >= 0)
                        st_insert(t->attr.name, "global", 0, 0, t->lineno, 0);
                    else if(st_memloc(t->attr.name, t->scope) >= 0)
                        st_insert(t->attr.name, t->scope, 0, 0, t->lineno, 0);
                    break;

                case VecIndexK:
                    if((st_memloc(t->attr.name, "global") == -1) && (st_memloc(t->attr.name, t->scope) == -1))
                        typeError(t, "Atribuição à posição de vetor não declarada anteriormente");
                    else if(st_memloc(t->attr.name, "global") >= 0)
                        st_insert(t->attr.name, "global", 0, 0, t->lineno, 0);
                    else if(st_memloc(t->attr.name, t->scope) >= 0)
                        st_insert(t->attr.name, t->scope, 0, 0, t->lineno, 0);
                    break;

                case CallK:
                    if((st_memloc(t->attr.name, "global") == -1) && (st_memloc(t->attr.name, t->scope) == -1) && (strcmp(t->attr.name,"input")!=0) 
                    && (strcmp(t->attr.name,"output")!=0))
                        typeError(t, "Chamada de função não declarada anteriormente");
                    else if(st_memloc(t->attr.name, "global") >= 0)
                        st_insert(t->attr.name, "global", 0, 0, t->lineno, 0);
                    else if(st_memloc(t->attr.name, t->scope) >= 0)
                        st_insert(t->attr.name, t->scope, 0, 0, t->lineno, 0);
                    break;

                default: break;
            }
            break;
        default: break;
    }
}

static void checkNode(TreeNode * t){ 
    switch (t->nodekind){ 
        case ExpK:
          switch(t->kind.exp){
            case OpK:
                if((t->child[0]->type != Integer) || (t->child[1]->type != Integer))
                    typeError(t, "Operator cannot be applied to operands of this type");
                break;
            }
          break;

        case StmtK:
          switch(t->kind.stmt){
            case IfK:
                if(t->child[0]->type != Boolean)
                    typeError(t->child[0], "if is not boolean");
            break;

            case WhileK:
                if(t->child[0]->type != Boolean)
                    typeError(t->child[0], "While is not boolean");
                break;

            case AssignK:
                if(t->child[1]->nodekind == ExpK && t->child[1]->kind.exp == CallK){
                    if((st_dataT(t->child[1]->attr.name, t->child[1]->scope) != Integer) && (st_dataT(t->child[1]->attr.name, "global") != Integer) && (strcmp(t->child[1]->attr.name,"input")!=0))
                        typeError(t->child[1], "Invalid attribution");
                }
                else if(t->child[1]->type != Integer)
                    typeError(t->child[1], "Invalid attribution");
                break;
                }
          break;

        default: break;

      }
}

void buildSymtab(TreeNode * syntaxTree){ 
    traverse(syntaxTree,insertNode,nullProc);

    if(st_memloc("main","global") == -1){
        fprintf(listing, "Main not declared");
        Error = TRUE;
    }
    
    if (TraceAnalyze){ 
        fprintf(listing,"\nSymbol table:\n\n");
        printSymTab(listing);
    }
}

void typeCheck(TreeNode * syntaxTree) {
    traverse(syntaxTree,nullProc,checkNode);
}