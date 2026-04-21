/* Grace is a program that doesn't contain any main function, instead it used macro's.
   It's purpose is to write its source code in another file*/
#include <stdio.h>
#define TARGET "./Grace_kid.c"
#define STR "/* Grace is a program that doesn't contain any main function, instead it used macro's.%3$c   It's purpose is to write its source code in another file*/%3$c#include <stdio.h>%3$c#define TARGET %2$c%4$s%2$c%3$c#define STR %2$c%1$s%2$c%3$c#define JOB() int main(void){FILE *f;int ret;f = fopen(TARGET, %2$cw%2$c);if (f == NULL) return (1);ret = fprintf(f, STR, STR, 34, 10, TARGET);if (ret < 0){fclose(f);return (1);}ret = fclose(f);if (ret != 0) return (1);return (0);}%3$cJOB()%3$c"
#define JOB() int main(void){FILE *f;int ret;f = fopen(TARGET, "w");if (f == NULL) return (1);ret = fprintf(f, STR, STR, 34, 10, TARGET);if (ret < 0){fclose(f);return (1);}ret = fclose(f);if (ret != 0) return (1);return (0);}
JOB()
