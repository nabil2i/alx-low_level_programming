#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string, seperator between the numbers
 * @n:number of integers to be printed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int copy;

	va_start(ap, n);

	if (n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		copy = va_arg(ap, int);
		printf("%d", copy);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
