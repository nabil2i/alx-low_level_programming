#include "main.h"

/**
 * puts_half - prints half(second half) of a string
 * if the number of characters is odd, print the last n characters
 * @str: arg, string to be passed
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	n = (len - 1) / 2;
	if (len % 2 == 0)
	{
		for (i = len / 2 ; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (i = n + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

}
