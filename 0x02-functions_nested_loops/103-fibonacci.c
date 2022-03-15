#include <stdio.h>
/**
 * main - find and print the sum of even-valued terms of Fibonacci
 * sequence and the max value of the Fibonacci sequence
 * should be 4 000 000
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int m, n, nextterm, sum;

	i = 0;
	sum = 0;
	while (i <= 33);
	{
		if (n < 4000000 && (m % 2) == 0)
		{
			sum = sum + m;
		}
		nextterm = m + n;
		m = n;
		n = nextterm;
		i++;
	}
	printf("%lu\n", sum);
	return (0);
}
