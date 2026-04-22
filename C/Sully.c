/* Sully generates copies of itself with a decreasing counter until it stops */
#include <stdio.h>
#include <stdlib.h>
#define SOURCE "/* Sully generates copies of itself with a decreasing counter until it stops */%3$c#include <stdio.h>%3$c#include <stdlib.h>%3$c#define SOURCE %2$c%1$s%2$c%3$c#define TARGET %2$c./Sully_%5$d.c%2$c%3$c#define EXEC %2$cSully_propagation_%5$d%2$c%3$c#define COUNTER %5$d%3$c%3$cint main(void){%3$c%4$cif (COUNTER < 0) return (0);%3$c%4$cFILE *f = fopen(TARGET, %2$cw%2$c);%3$c%4$cif (!f) return (1);%3$c%4$cif (fprintf(f, SOURCE, SOURCE, 34, 10, 9, COUNTER - 1) < 0) return fclose(f), 1; // <----- printf the source code%3$c%4$cfclose(f);%3$c%4$creturn system(%2$cgcc -Wall -Wextra -Werror %2$c TARGET %2$c -o %2$c EXEC %2$c; ./%2$c EXEC %2$c; rm -f %2$c EXEC) != 0;%3$c}%3$c"
#define TARGET "./Sully_5.c"
#define EXEC "Sully_propagation_5"
#define COUNTER 5

int main(void){
	if (COUNTER < 0) return (0);
	FILE *f = fopen(TARGET, "w");
	if (!f) return (1);
	if (fprintf(f, SOURCE, SOURCE, 34, 10, 9, COUNTER - 1) < 0) return fclose(f), 1; // <----- printf the source code
	fclose(f);
	return system("gcc -Wall -Wextra -Werror " TARGET " -o " EXEC "; ./" EXEC "; rm -f " EXEC) != 0;
}
