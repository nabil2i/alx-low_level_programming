#include <stdio.h>
/**
 * main - print all numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	i = 48;
	c = 'a';
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
