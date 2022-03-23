#include "main.h"

/**
 * rot13 - encodes strings using rot13
 * @s: arg, text to encode
 * Return: pointer to a char
 */
char *rot13(char *s)
{
	int i, j;

	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (input[j] != '\0')
		{
			if (s[i] == input[j])
			{
				s[i] = code[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
