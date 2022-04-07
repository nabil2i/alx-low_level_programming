#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of ptr
 * @new_size: new size
 * Return: pointer to the new allocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *nptr;
	char *optr;
	unsigned int i;

	optr = ptr;
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		return (nptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			nptr[i] = optr[i];
		free(ptr);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			nptr[i] = optr[i];
		free(ptr);
	}
	return (nptr);
}
