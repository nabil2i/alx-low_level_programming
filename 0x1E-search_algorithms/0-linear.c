#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * if integers using the linear algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 * or -1 if value is not present or if array NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
	{
		return (-1);
	}
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
