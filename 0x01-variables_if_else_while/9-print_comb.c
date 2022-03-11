#include <stdio.h>
/**
 * main - print all possible combination of single digit
 * numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
