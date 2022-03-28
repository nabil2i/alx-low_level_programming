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

	while (s[i] != '\0')
	{
		flag = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				b++;
				flag = 1;
			}
			j++;
		}
		if (flag == 0)
			return (b);
		i++;
	}
	return (0);
}
