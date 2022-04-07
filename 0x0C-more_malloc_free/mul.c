#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _isdigit(char c);
int _strlen(char *s);
/**
 * _isdigit - checks if a character is a digit or not
 * @c: character to chcek
 * Return: 1 if it's a digit and 0 ifnot
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

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
 * main - multiplies two positive numbers
 * @argc: number of passed arguments
 * @argv: array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, len1, len2, l2, len, flag, flag2, m, d1, d2;
	char *s1, *s2;
	int *n;

	flag = 0;
	m = 0;
	n = 0;
	len1 = 0;
	len2 = 0;
	l2 = 0;
	len = 0;
	flag2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	s1 = argv[1];
	s2 = argv[2];
	i = 0;
	while (s1[i])
	{
		if (!_isdigit(s1[i]))
			flag++;
		i++;
	}

	j = 0;
	while (s2[j])
	{
		if (!_isdigit(s2[j]))
			flag++;
		j++;
	}
	if (flag != 0)
	{
		printf("Error\n");
		exit(98);
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	l2 = len2;
	len = len1 + len2;
	n = malloc((len1 + len2 + 1) * sizeof(int));
	if (n == NULL)
		return (1);

	for (i = 0; i < (len1 + len2 + 1); i++)
		n[i] = 0;

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		m = 0;
		d1 = s1[len1] - '0';
		for (len2 = l2 - 1; len2 >= 0; len2--)
		{
			d2 = s2[len2] - '0';
			m = m + n[len1 + len2 + 1] + (d1 * d2);
			n[len1 + len2 + 1] = m % 10;
			m = m / 10;
		}
		if (m > 0)
			n[len1 + len2 + 1] = n[len1 + len2 + 1] + m;
	}
	for (i = 0; i < len; i++)
	{
		if (n[i] != 0)
			flag2 = 1;
		if (flag2 == 1)
			_putchar(n[i] + '0');
	}
	if (flag2 == 0)
		_putchar('0');
	_putchar('\n');
	free(n);
	return (0);
}
