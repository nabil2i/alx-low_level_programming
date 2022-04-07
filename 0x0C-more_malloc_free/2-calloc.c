#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of elements of the array
 * @size: size of array element data type
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;
       
	i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		m[i] = 0;
	return (m);
}
