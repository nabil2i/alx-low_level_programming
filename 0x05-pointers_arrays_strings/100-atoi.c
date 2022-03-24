#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: arg, pointer to a string
 * Return: an integer
 */
int _atoi(char *s)
{
	int i, posneg, k, n,  len, flag;

	i = 0;
	posneg = 0;
	n = 0;
	len = 0;
	flag = 0;
	k = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len && flag == 0)
	{
		if (s[i] == '-')
			++posneg;

		if (s[i] >= 48 && s[i] <= 57)
		{
			k = s[i] - '0';
			if (posneg % 2)
				k = -k;
			n = n * 10 + k;
			flag = 1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
			flag = 0;
		}
		i++;
	}

	if (flag == 0)
		return (0);

	return (n);
}
