#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings to print
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *copy;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		copy = va_arg(ap, char *);
		if (copy == NULL)
			copy = "(nil)";
		if (separator == NULL)
		{
			printf("%s", copy);
		}
		else if (separator != NULL && i == 0)
		{
			printf("%s", copy);
		}
		else
		{
			printf("%s%s", separator, copy);
		}
	}
	printf("\n");
	va_end(ap);

}
