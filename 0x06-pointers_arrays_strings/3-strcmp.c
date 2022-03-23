#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: arg1, first string
 * @s2: arg2, second string
 * Return: integer positive if s1 is greater than s2
 * negative if s1 is smaller than s2
 * zero is s1 and s2 match
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		/* if characters differ */
		if (*s1 != *s2)
			break;
		/* we go to the next pair of characters*/
		s1++;
		s2++;
	}
	/* ASCII difference */
	return (*s1 - *s2);

}
