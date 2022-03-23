#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: arg1, pointer to the first string
 * @src: arg2, pointer to the concatenated string
 * Return: pointer to a string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len;

	len = 0;
	i = 0;
	j = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = len ; src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
