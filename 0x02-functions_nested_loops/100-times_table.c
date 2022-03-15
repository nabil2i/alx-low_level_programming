#include "main.h"
/**
 * print_times_table - print the n times table
 * @n: argument, table of n
 * Return: nothing (display the table or nothing)
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i, j, m;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if (j == 0)
				{
					_putchar(m + 48);
				}
				else if (j != 0 && m < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(m + 48);
				}
				else if (m >= 10 && m < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((m / 10) + 48);
					_putchar((m % 10) + 48);
				}
				else if (m  >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}

			}
			_putchar('\n');
		}
	}
}
