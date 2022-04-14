#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: constant pointer to a char
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *copy, *separator = "";
	int i;

	va_start(ap, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ap, double));
					break;
				case 's':
					copy = va_arg(ap, char *);
					if (copy == NULL)
						copy = "(nil)";
					printf("%s%s", separator, copy);
					break;
				default:
					i++;
					continue;
			}

			i++;
			separator = ", ";
		}

	}
	printf("\n");
	va_end(ap);
}
