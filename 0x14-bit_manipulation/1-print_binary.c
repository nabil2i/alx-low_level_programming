#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n / 2 != 0)
	{
		print_binary(n / 2);
	}
	_putchar((n % 2) + '0');
}
