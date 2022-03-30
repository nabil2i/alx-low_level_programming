#include "main.h"
int strlen_rec(char *s);

/**
 * strlen_rec - computes the length of a string
 * @s: string
 * Return: integer length
 */
int strlen_rec(char *s)
{
	if (!*s)
		return (0);
	return (1 + strlen_rec(s + 1));
}
/**
 * wildcmp - compares two strings
 * @s1: string #1
 * @s2: string #2
 * return: 1 if strings are equal, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	/*int len1, len2;

	len1 = strlen_rec(s1);
	len2 = strlen_rec(s2);*/
	
	/*if (*s1 == ' ')
		return (wildcmp(s1 + 1, s2));
	if (*s2 == ' ')
		return (wildcmp(s1, s2 + 1));*/

	if (*s1 == '\0' || *s2 == '\0')
		return (0);

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1));
	
	
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/*if (*s1 == '\0')
		return (len1);
	if (*s2 == '\0')
		return (len2);*/

	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (1);

}
