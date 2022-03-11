#include <stdio.h>
/**
 * main - print the alphabet in lowercase, then in uppercase
 * followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c < 123)
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c < 91)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
