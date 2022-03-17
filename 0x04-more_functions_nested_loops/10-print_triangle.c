#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: arg, size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i + 1 ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
