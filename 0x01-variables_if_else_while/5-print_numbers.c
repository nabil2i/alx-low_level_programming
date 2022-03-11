#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 
 * starting with 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
