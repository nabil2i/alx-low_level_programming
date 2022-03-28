#include "main.h"

/**
 * _memcpy - copyies n bytes from memory
 * @dest: pointer to where n bytes are copied to
 * @src: pointer to where n bytes are copied from
 * @n: bytes to copy
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
