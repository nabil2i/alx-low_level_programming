#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the name of the program followed by a newline
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (EXIT_SUCCESS);
}

