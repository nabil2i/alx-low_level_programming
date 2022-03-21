#include "main.h"

/**
 * puts2 - prints every character of a strong starting with
 * the first character
 * @str: arg, pointer to a string
 * Return: nothing
 */
void puts2(char *str)
{
	int i, len;

	i = 0;
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
