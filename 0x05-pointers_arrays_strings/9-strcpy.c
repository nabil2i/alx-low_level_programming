#include "main.h"

/**
 * _strcpy - copies the string pointed to by src including the numm byte
 * to the buffer pointed to by dest
 * @dest: arg1, pointer to the buffer receiving the copy
 * @src: arg2, pointer to string being copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{

	int i, len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
