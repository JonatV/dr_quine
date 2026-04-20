/* Grace is a program that doesn't contain any main function, instead it used macro's
   It's purpose is to write its source code in another file*/
#include <stdio.h>
#define JOB() int main(){ printf("01"); return (0);}

JOB()
