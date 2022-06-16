#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: number of elements of array
 *
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		temp = *a[i];
		*a[i] = a[n];
		a[n] = temp;
	}
}
