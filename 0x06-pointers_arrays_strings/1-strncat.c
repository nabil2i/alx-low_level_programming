#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: arg1; pointer to first string
 * @src: arg2, pointer to the string to be appended
 * @n: maximum bytes to take from src
 * Return: nothing
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	i = 0;
	j = 0;
	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = len; src[j] != '\0' && j < n; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
