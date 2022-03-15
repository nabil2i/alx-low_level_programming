#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * Return: 1 if character is a letter lowercase or uppercase
 * and 0 otehrwise
 * @c: argument to check
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
