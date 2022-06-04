#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description:print the character.
 *Return:(0) that's great.
 */
int main(void)
{
char alph;
for (alph = 'a' ; alph <= 'z' ; alph++)
{putchar (alph); }
for (alph = 'A' ; alph <= 'Z' ; alph++)
{putchar (alph); }
putchar ('\n');
return (0);
}
