#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main block
 *Description:Print all possible combinations of single digit numbers.
 *Return:(0) Success.
 */
int main(void)
{
int i;
while (i < 10)
{putchar(i + '0');
if (i < 9)
{putchar(',');
putchar(' '); }
i++;
}
putchar('\n');
return (0);
}
