#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all received arguments
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (EXIT_SUCCESS);
}
