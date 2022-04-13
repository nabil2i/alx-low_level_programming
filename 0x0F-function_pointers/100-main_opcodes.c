#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to main program
 * @argv: pointer to an array of char
 * Return: Always 0 (Success°
 */
int main(int argc, char *argv[])
{
	int number_bytes, i;
	char *instruction;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_bytes = atoi(argv[1]);

	if (number_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	instruction = (char *)main;
	for (i = 0; i < number_bytes; i++)
	{
		if (i == number_bytes - 1)
		{
			printf("%.2hhx\n", instruction[i]);
		}

		printf("%.2hhx ", instruction[i]);
	}

	return (0);
}
