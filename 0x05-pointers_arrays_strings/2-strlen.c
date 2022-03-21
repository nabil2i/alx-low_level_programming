#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: arg, pointer to a string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i, len;

	i = 0;
	len = 0;
	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
