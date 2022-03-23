#include "main.h"

/**
 * _strncpy - copies a string exactly as strncpy
 * @dest: arg1, pointer to the string receiving the copy
 * @src: arg2, pointer to the string being copied
 * @n: arg3, max bytes to be copied
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
