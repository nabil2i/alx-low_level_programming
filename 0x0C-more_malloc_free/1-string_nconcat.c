#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum bytes of s2 to copy
 * Return: pointer to newly allocated memory for the concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1, len2;


	i = 0;
	j = 0;
	len1 = 0;
	while (s1 && s1[len1])
		len1++;

	len2 = 0;
	while (s2 && s2[len2])
		len2++;

	if (len2 > n)
		len2 = n;

	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
			s[i] = s1[i];
	}

	if (s2 != NULL)
	{
		j = 0;
		for (; i < (len1 + len2); i++)
		{
			s[i] = s2[j];
			j++;
		}
	}
	s[i] = '\0';
	return (s);
}
