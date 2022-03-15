#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers from n to 98
 * @n: argument
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			else if (n == 98)
			{
				printf("\n");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			else if (n == 98)
			{
				printf("\n");
			}
			n--;
		}
	}
}
