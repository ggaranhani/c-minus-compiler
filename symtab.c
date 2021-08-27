#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "globals.h"
#include "symtab.h"
#include "util.h"

#define SIZE 551
#define SHIFT 4

static int hash ( char * key ){ 
    int temp = 0;
    int i = 0;
    while (key[i] != '\0'){ 
        temp = ((temp << SHIFT) + key[i]) % SIZE;
        ++i;
    }
    return temp;
}

typedef struct LineListRec
   { int lineno;
     struct LineListRec * next;
   } * LineList;

typedef struct BucketListRec
   { 
    char * scope;
    ExpType datatype;
    IdType id;
    char * name;
    LineList lines;
    int memloc ;
    struct BucketListRec * next;
   } * BucketList;

/* the hash table */
static BucketList hashTable[SIZE];

void st_insert(char * name, char * scope, IdType id, ExpType datatype, int lineno, int loc) { 
    int h = hash(name), collision = 0;
    BucketList l =  hashTable[h], p = NULL;
    /* Match name and scope */
    while(l != NULL) {
        if((strcmp(name, l->name) == 0) && (strcmp(scope, l->scope) == 0))
            break;
        p = l;
        l = l->next;
        collision = 1;
    }
    /* Symbol not found in the table -> insert it */
    if(l == NULL) { 
        l = (BucketList) malloc(sizeof(struct BucketListRec));
        l->name = name;
        l->lines = (LineList) malloc(sizeof(struct LineListRec));
        l->lines->lineno = lineno;
        l->memloc = loc;
        l->lines->next = NULL;
        l->next = NULL;
        l->scope = scope;
        l->id = id;
        l->datatype = datatype;
        /* No collision */
        if(!collision)
            hashTable[h] = l;
        /* Collision */
        else{
            p->next = l; 
        }
    }
    /* Symbol found in table -> add line */
    else { 
        LineList t = l->lines;
        while(t->next != NULL)
            t = t->next;
        t->next = (LineList) malloc(sizeof(struct LineListRec));
        t->next->lineno = lineno;
        t->next->next = NULL;
    }
} 

int st_memloc ( char * name, char * scope ){ 	
    int h = hash(name);
    BucketList l =  hashTable[h];
    while(l != NULL){
        if((strcmp(name, l->name) == 0) && (strcmp(scope, l->scope) == 0))
            break;
        l = l->next;
    }
    if(l == NULL)
        return -1;
    else
        return l->memloc;
}

int st_dataT(char * name, char * scope){
    int h = hash(name);
    BucketList l =  hashTable[h];
    while(l != NULL){
        if((strcmp(name, l->name) == 0) && (strcmp(scope, l->scope) == 0))
            break;
        l = l->next;
    }
    if(l == NULL)
        return -1;
    else
        return l->datatype;
}

int st_idT(char * name, char * scope){
    int h = hash(name);
    BucketList l =  hashTable[h];
    while(l != NULL){
        if((strcmp(name, l->name) == 0) && (strcmp(scope, l->scope) == 0))
            break;
        l = l->next;
    }
    if(l == NULL)
        return -1;
    else
        return l->id;
}

void printSymTab(FILE * listing){ 
    int i;
    fprintf(listing,"Name            Type             Scope       Data Type      Line\n");
    fprintf(listing,"--------        ----------       --------    ---------      -------\n");
  
    for(i = 0; i < SIZE; ++i){
        if(hashTable[i] != NULL){
            BucketList l = hashTable[i];
            while(l != NULL){
                LineList t = l->lines;
                fprintf(listing, "%-16s ", l->name);
                switch(l->id){
                    case variableT:
                        fprintf(listing, "%-16s ", "variable");
                        break;
                    case vectorT:
                        fprintf(listing, "%-16s ", "vector");
                        break;
                    case functionT:
                        fprintf(listing, "%-16s ", "function");
                        break;
                }
                fprintf(listing, "%-10s ", l->scope);
                switch(l->datatype){
                    case Void:
                        fprintf(listing, "%-12s ", "void");
                        break;
                    case Integer:
                        fprintf(listing, "%-12s ", "integer");
                        break;
                }
                while (t != NULL){
                    fprintf(listing, "%4d ", t->lineno);
                    t = t->next;
                }
                fprintf(listing, "\n");
                l = l->next;
            }
        }
    }
} /* printSymTab */

