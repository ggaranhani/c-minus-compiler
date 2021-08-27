# c-minus-compiler
Compilador C- feito durante a disciplina de Compiladores

flex .\LEX\cm.l<br/>
bison -d .\BISON\cm.y<br/>
gcc -c *c<br/>
gcc -o cm *.o -ly -lfl<br/>
./cm .\sort.cm > final2.txt   
