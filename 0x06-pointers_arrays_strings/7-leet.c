#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: arg, string to encode
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	int i, j;

	char *input = "aAeEoOtTlL";
	char *code = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = code[j];
			}
		}
		i++;
	}

	return (s);
}
