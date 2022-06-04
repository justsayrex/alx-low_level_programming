#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -Entry point
 *Description:print the character. except e and q.
 *Return:(0) that's great.
 */
int main(void)
{
char alph;
for (alph = 'a' ; alph <= 'z' ; alph++)
{
if (alph != 'e' && alph != 'q')
putchar (alph);
}
putchar ('\n');
return (0);
}
