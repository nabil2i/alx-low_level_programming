#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the binary number
 * Return: the converted number
 *	or 0 if bb is NULL or one or more chars in the string b
 *	different from 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c, len;

	c = 0;
	if (!b)
		return (0);

	len = 0;
	while (b[len])
	{
		if (b[len] < '0' || b[len] > '1')
		{
			return (0);
		}
		c = 2 * c + (b[len] - '0');
		len++;
	}
	return (c);
}
