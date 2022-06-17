#include "main.h"

/**
 * reverse_array -> reversing an array
 * @a: array a
 * @n: an elements of array
 */

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;
	for (i = 0; i < n - 1; i++)
		p++;
	for (k = 0; k < n / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
