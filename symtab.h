#ifndef _SYMTAB_H_
#define _SYMTAB_H_

/* Procedure st_insert inserts line numbers and
 * memory locations into the symbol table
 * loc = memory location is inserted only the
 * first time, otherwise ignored
 */
void st_insert(char * name, char * scope, IdType id, ExpType datatype, int lineno, int loc);

/* Function st_memloc returns the memory 
 * location of a variable or -1 if not found
 */
int st_memloc(char * name, char * scope);

/* Function st_dataT returns the memory 
 * location of a variable or -1 if not found
 */
int st_dataT(char * name, char * scope);

/* Function st_idT returns the memory 
 * location of a variable or -1 if not found
 */
int st_idT(char * name, char * scope);

/* Procedure printSymTab prints a formatted 
 * listing of the symbol table contents 
 * to the listing file
 */
void printSymTab(FILE * listing);

#endif

