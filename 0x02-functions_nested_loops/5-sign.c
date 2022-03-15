#include "main.h"
/**
 * print_sign - prints the sign of number
 * Return: 1 and prints + if the number is greater than 0
 * 0 and prints 0 if the number is zero
 * -1 and prints - if the number is less than zero
 * @n: argument to check
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
