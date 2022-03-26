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
	int len1, len2, i, j, k, l, reminder, add, temp;

	k = 0;
	len1 = 0;
	len2 = 0;
	reminder = 0;
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 > size_r || len2 > size_r)
		return (0);

	for (i = len1 - 1, j = len2 - 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		add = reminder;
		if (i >= 0)
			add = add + (n1[i] - '0');
		if (j >= 0)
			add = add + (n2[j] - '0');
		if (i < 0 && j < 0 && add == 0)
			break;
		reminder = add / 10;
		r[k] = add % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || reminder != 0)
		return (0);
	for (l = k - 1, i = 0; i < l; l--, i++)
	{
		temp = r[l];
		r[l] = r[i];
		r[i] = temp;
	}
	return (r);
}
