#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers
 * @a: arg1,  pointer to integer
 * @n: arg2, number of elements of the array
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
