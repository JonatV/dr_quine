/* Colleen: prints itself on the terminal */

#include <stdio.h>

char *get_str(){
	return "/* Colleen: prints itself on the terminal */%3$c%3$c#include <stdio.h>%3$c%3$cchar *get_str(){%3$c%4$creturn %2$c%1$s%2$c;%3$c}%3$c%3$cint main (void){%3$c%4$cchar *str = get_str();%3$c%4$c/* ASCII: 34 = quote, 10 = newline, 9 = tab */%3$c%4$cprintf(str, str, 34, 10, 9);%3$c%4$creturn (0);%3$c}%3$c";
}

int main (void){
	char *str = get_str();
	/* ASCII: 34 = quote, 10 = newline, 9 = tab */
	printf(str, str, 34, 10, 9);
	return (0);
}
