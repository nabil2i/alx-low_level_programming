#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: arg, string to capitalize
 * Return: pointer to a string
 */
char *cap_string(char *s)
{
	int i, j;
	char seperator[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 13)
		{
			if (s[i] == seperator[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
			j++;
		}
		i++;
	}

	return (s);
}
