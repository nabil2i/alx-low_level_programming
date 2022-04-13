#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search into
 * @size: size of the array
 * @cmp: pointer to a function to be used to compare values
 * Return: the index of the first element for which cmp doesnt
 *		return 0
 *		-1 if no element matches or size<=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}
