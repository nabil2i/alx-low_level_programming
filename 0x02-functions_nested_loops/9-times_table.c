#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: nothing
 */
void times_table(void)
{
	int i, j, n;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			n = i * j;
			if (n < 10)
			{	_putchar(' ');
				_putchar(n + 48);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
			}
			else if (n >= 10)
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
			}
		}
		_putchar('\n');
		i++;
	}
}
