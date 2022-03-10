#include <stdio.h>
/**
 *  main - print to stderr the phrase
 *  "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
 *  Return: 1 if error
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59, 1, stderr);
	return (1);
}
