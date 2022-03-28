#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s:arg1, pointer to a string
 * @b:arg2, constant byte for memory filling
 * @n: arg3, bytes filled in memory
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
