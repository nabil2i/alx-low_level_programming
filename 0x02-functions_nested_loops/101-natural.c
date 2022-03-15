#include <stdio.h>
/**
 * main - compute and print the sum of all multiples
 * of 3 and 5 below 1024 (excluded)
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n;

	n = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n = n + i;
		}
	}
	printf("%d\n", n);
	return (0);
}
