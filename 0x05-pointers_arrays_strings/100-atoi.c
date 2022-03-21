#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: arg, pointer to a string
 * Return: an integer
 */
int _atoi(char *s)
{
	int i, len, number, flag, d, n;

	i = 0;
	len = 0;
	flag = 0;
	number = 0;
	d = 0;
	n = 0;

	while (s[i] != '\0')
	{
		len++;
	}
	while (i < len && flag ==0)
	{
		if (s[i] == '-')
		{
			++d;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = s[i] - '0';
			if (d % 2 != 0)
			{
				number = -number;
			}
			n = n * 10 + number;
			flag = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			flag = 0;
		}
		i++;
	}

	if (flag == 0)
	{
		return (0);
	}
	return (n);

}
