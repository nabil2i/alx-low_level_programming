#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _isdigit(char c);
int _strlen(char *s);
int _atoi(char *s);
/**
 * _isdigit - checks if a character is a digit or not
 * @c: character to chcek
 * Return: 1 if it's a digit and 0 ifnot
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}*

/**
 * _strlen - computes the lenght of a string
 * @s: string to compute the length of
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;
	for (len = 0; s[len]; len++)
		;
	return (len);
}

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

	len = _strlen(s);

	while (i < len && flag == 0)
	{
		if (s[i] == '-')
			++posneg;

		if (s[i] >= 48 && s[i] <= 57)
		{
			k = s[i] - '0';
			if (posneg % 2 != 0)
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

/**
 * main - multiplies two positive numbers
 * Return: Always 0 (Success)
 */
int main(int argc; char *argv[])
{
	int i, j, n1, n2, n, flag;
	flag = 0, n1 = 0, n2 = 0, n = 0;
	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}
	i = 0;
	while (argv[1][i])
	{
		if (!_isdigit(argv[1][i]))
			flag++;
		i++;
	}
	j = 0;
	while (argv[2][j])
	{
		if (!_isdigit(argv[2][j]))
			flag++;
		j++;
	}
	if (flag != 0)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = _atoi(argv[1];
	n2 = _atoi(argv[2];
	n = n1 * n2;
	printf("%d\n", n);


	
	return (EXIT_SUCCESS);
}
