#include "main.h"

/**
 * rev_string - reverses a string
 * @s: arg, pointer to a string
 * Return: nothing
 */
void rev_string(char *s)
{
	char c;
	int i, j, len, length;

	i = 0;
	len = 0;
	length = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	len = i;
	length = len - 1;
	for (j = 0; j < len / 2; j++)
	{
		c = *(s + j);
		*(s + j) = *(s + length);
		*(s + length) = c;
		length--;
	}
}
