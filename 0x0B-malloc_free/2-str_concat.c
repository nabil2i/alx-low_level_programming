#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
 * _strlen - compute the length of a string
 * @s: pointer to a char
 * Return: integer, the number of charcaters of the string
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
		l++;

	return (l);

}
/**
 * str_concat - concatenate two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: pointer to the newly allocated space in memory which contains
 *		the contents of S1 followed by the contents of s2 and null
 *		terminated
 *		-NULL on failure
 *		-empty string if NULL is passed
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *s;

	j = 0;
	if (s1 != NULL)
		len1 = _strlen(s1);
	if (s2 != NULL)
		len2 = _strlen(s2);
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			s[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (i = len1; i < (len1 + len2); i++)
		{
			s[i] = s2[j];
			j++;
		}
	}
	s[i] = '\0';
	return (s);

}
