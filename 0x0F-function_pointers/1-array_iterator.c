#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to pass as parameter
 * @size: size of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}

}
