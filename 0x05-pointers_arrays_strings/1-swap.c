#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: arg1 - pointer to an integer
 * @b: arg2 - pointer to an integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
