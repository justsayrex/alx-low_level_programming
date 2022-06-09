#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	long int i, number = 612852475143;

	for (i  = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;

			i--;
		}
	}
	printf("%lu\n", i);

	return (0);
}

