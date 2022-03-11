#include <stdio.h>
/**
 * main - print all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	while (i < ':')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
