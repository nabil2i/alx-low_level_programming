#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: pointer to a char
 * Return: pointer to new allocated string
 *		NULL if str = NULL or insufficient memory
 */
char *_strdup(char *str)
{

	char *str2;
	int i, len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;

	str2 = malloc((len + 1) * sizeof(char));
	if (str2 == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
