#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of the file the program is compiled from
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (EXIT_SUCCESS);
}
