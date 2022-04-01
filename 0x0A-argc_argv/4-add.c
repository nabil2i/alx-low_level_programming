#include <stdio.h>
#include <stdlib.h>

int checkdigit(char c);

/**
 * checkdigit - checks if the charcater is a digit or not
 * @c: character to check
 * Return: 1 if it is a digit and 0 otherwiwse
 */
int checkdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * main - adds to positive numbers
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 0;
	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!checkdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
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
