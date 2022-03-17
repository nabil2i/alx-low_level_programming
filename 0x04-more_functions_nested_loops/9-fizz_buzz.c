#include <stdio.h>

/**
 * main - prints number from 1 to 100 with Fizz, Buzz and FizzBuzz
 * Return: nothing
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0) && (i != 100))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0 && i != 100)
		{
			printf("Buzz ");
		}

		else if (i % 3 == 0 && i != 100)
		{
			printf("Fizz ");
		}
		else
		{	
			printf("%d ", i);

		}
	}
	return (0);
}
