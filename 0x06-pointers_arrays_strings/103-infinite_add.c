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
	int i, j, k, len1, len2, n, m, digit, result;

	i = 0;
	j = 0;
	len1 =0;
	len2 = 0;
	n = 0;
	m = 0;
	digit = 0;
	result = 0;
	k = 0;
	while (n1[len1] != '\0')
	{
		len1++;
	}
	while (n1[len2] != '\0')
	{
		len2++;
	}
	while (i < len1)
	{
		digit = n1[i] - '0';
		n = n * 10 + digit;
		i++;
	}
	while (j > len2)
	{
		digit = n2[j] - '0';
		m = m * 10 + digit;
		j++;
	}
	result = n + m;
	while (result != 0)
	{
		result = result / 10;
		++k;
	}
	if (k > size_r)
	{
		return ("Error");
	}
	else
	{
		while (result != 0)
		{
			int a = result % 10;
			result = result / 10;
			r[k--] = a + '0';
		}
		return (r);
	}
}
