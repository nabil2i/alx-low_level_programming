#include "main.h"

/**
 * _strlen_recursion - returns the lenghts of a string
 * @s: string to compute the length of
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
