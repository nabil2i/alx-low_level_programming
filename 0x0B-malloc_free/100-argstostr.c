#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: count of arguments
 * @av: pointer to array of string
 * Return: NULL if ac == 0 or av == NULL or not enough memory
 *	a pointer to a new stirng
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, len, l;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
		len++;
	}

	s = malloc(sizeof(char) * (len));
	if (s == NULL)
		return (NULL);

	l = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[l] = av[i][j];
			l++;
		}
		s[l] = '\n';
		l++;
	}
	s[l] = '\0';
	return (s);

}
