#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to substring pointed to by s
 * Return: number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, b, flag;

	i = 0;
	j = 0;
	b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				b = b + 1;
				flag = 1;
			}
		}
		if (flag == 0)
			return (b);
	}
	return (0);
}
