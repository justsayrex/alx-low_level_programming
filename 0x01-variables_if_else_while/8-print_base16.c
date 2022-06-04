#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main block
 *Description:	prints all the numbers of base 16 in lowercase with putchar.
 *Return: (0) that's cool.
 */
int main(void)
{
int i;
char alph;
for (i = 0 ; i < 10 ; i++)
{putchar(i + '0'); }
for (alph = 'a'; alph < 'g'; alph++)
{putchar(alph); }
putchar('\n');
return (0);
}
