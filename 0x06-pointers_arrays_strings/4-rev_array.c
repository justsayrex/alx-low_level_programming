#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array a
 * @n: number of elements of array
 *
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int *p , i, aux, k;
	
	a = [1, 2, 3, 4];
	aux = 1
	a = [4, 3, 2, 1]
	p = a;
	for (i = 0; i < n - 1; i++)
		p++;
	for (k = 0; k < n / 2; k++)
	{
		aux = a[k]
		a[k] = *p;
		*p = aux;
		p--;
	}
}
