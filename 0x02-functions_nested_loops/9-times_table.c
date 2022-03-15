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
			if (j == 0)
			{
				_putchar(n + 48);
				j++;
			}
			if (j != 0 && n < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + 48);
				j++;
			}
			else if (n >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
				j++;
			}
		}
		_putchar('\n');
		i++;
	}
}
