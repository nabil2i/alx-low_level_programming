#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize it
 * with a specific char
 * @size: size of the array
 * @c: character to fill the array from
 * Return: pointer to a char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	i = 0;
	if (size == 0)
		return (NULL);
	s = (char *)malloc((size) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);

}
