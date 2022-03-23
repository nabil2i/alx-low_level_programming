#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: arg1, point to an integer
 * @n: number of elements of the array
 * Result: nothing
 */
void reverse_array(int *a, int n)
{
	int i, m, tmp;

	m = n - 1;
	tmp = 0;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[m];
		a[m] = tmp;
		m--;
	}
}
