#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - function the prints a character given as arg
 * Return: 1 (Success)
 * Return: Negative number (Error)
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
/**
 * prinline - prints a bytes on a line
 * @s: buffer
 * @l: line
 */
void printline(char *s, int a, int l)
{
	int i, j;
	for (i = 0; i <= 9; i++)
	{
		if (i <= a)
			printf("%02x", s[l * 10 + i]);
		else 
			printf("  ");
		if (i % 2 != 0)
			_putchar(' ');
	}
	for (j = 0; j <= a; j++)
	{
		if (s[l * 10 + j] > 31 && s[l * 10 + j] < 127)
			_putchar(s[l * 10 + j]);
		else
			_putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: arg1, buffer to be printed
 * @size: 
 * Return: Nothing
 */
void print_buffer(char *b, int size)
{

	int i;
	for (i = 0; i <= (size - 1) / 10 && size != 0; i++)	
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			printline(b, 9, i);
		}
		else
		{
			printline(b, size % 10 - 1, i);
		}
		_putchar('\n');
	}
	if (size == 0)
		_putchar('\n');

}
