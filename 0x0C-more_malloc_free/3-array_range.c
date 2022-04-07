#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value included in array
 * @max: maximum valued included in array
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *a;
	int i, n;

	i = 0;
	n = 0;
	if (min > max)
		return (NULL);
	n = max - min + 1;

	a = malloc(n * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		a[i] = min + i;
	return (a);
}
