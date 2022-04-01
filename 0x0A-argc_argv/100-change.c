#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins to make change for
 * an amount of money
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, min, cents;
	int coins[] = {25, 10, 5, 2, 1};

	cents = atoi(argv[1]);
	min = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}
	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (cents >= coins[i])
		{
			min++;
			cents = cents - coins[i];
		}
	}
	printf("%d\n", min);
	return (EXIT_SUCCESS);
}
