#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds to positive numbers
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
