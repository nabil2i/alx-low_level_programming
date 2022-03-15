#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: nothing
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0, i < 10, i++)
	{
		for (j = 0, j < 10, j++)
		{
			n = i * j;
			if (j == 0)
			{
				_putchar(n + 48);
			}
			if (j != 0 && n < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + 48);
			}
			else if (n >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
