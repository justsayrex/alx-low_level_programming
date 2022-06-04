#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main block
 *Description:prints the lowercase alphabet in reverse.
 *Return: (0) Lowercase is underrated.
 */
int main(void)
{
char alph;
for (alph = 'z' ; alph >= 'a' ; alph--)
{putchar (alph); }
putchar ('\n');
return (0);
}
