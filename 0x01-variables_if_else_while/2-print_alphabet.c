#include <stdio.h>
/**
 * main - the alphabet game
 * print the alphabet with putchar
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
	putchar('\n');
	return (0);
}
