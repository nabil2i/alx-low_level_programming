#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of arguments passed into the program
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
