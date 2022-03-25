#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: arg1, first number
 * @n2: arg2, second number
 * @r: arg3, buffer to store the result
 * @size_r: buffer size
 * Return: pointer to r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, reminder, a[255], b[255], sum[255];

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	reminder = 0;
	while (*n1)
		a[i++] = *n1++ - 48;
	while (*n2)
		b[j++] = *n2++ - 48;
	if (i < j)
	{
		for (l = i; l > 0; l--)
		{
			sum[k++] = ((a[l - 1] + b[--j]) + reminder) % 10;
			reminder = ((a[l - 1] + b[j]) + reminder) / 10;
		}
		while (j > 0)
		{
			sum[k++] = b[--j] + reminder;
			reminder = 0;
		}
	}
	else
	{
		for (l = j; l > 0; l--)
		{
			sum[k++] = ((b[l - 1] + a[--i]) + reminder) % 10;
			reminder = ((b[l - 1] + a[i]) + reminder) / 10;
		}
		if (i == 0 && reminder == 1)
			sum[k++]  = reminder;
		while (i > 0)
		{
			sum[k++] = a[--i] + reminder;
			reminder = 0;
		}
	}
	if (k + 2 > size_r)
	{
		return (0);	
	}
	else
	{
		for (l = k - 1; l >= 0; l--)
		{
			r[k - l - 1] = sum[l] + '0';
		}	 
		r[k] = '\0';
		return (r);
	}
}
