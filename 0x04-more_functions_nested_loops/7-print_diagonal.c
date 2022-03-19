#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: arg
 *Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i + 1; j++)
			{
				if (j != 0 && i != 0)
					_putchar(' ');

			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
