#include "main.h"

/**
 * puts2 - prints every character of a strong starting with
 * the first character
 * @str: arg, pointer to a string
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
