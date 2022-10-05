#include "search_algos.h"

/**
 * print_search_array - prints the array of integers
 * to be search
 * @array: pointer to the array to print
 * @size: size of array
 *
 * Return: nothing
 */
void print_search_array(int *array, size_t size)
{
	size_t i = 0;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array
 * of integers using Binary search algorithm
 * @array: pointer to the array to search into
 * @size: size  of the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if
 * the value is not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, middle, end;

	if (array != NULL && size > 0)
	{
		start = 0;
		end = size - 1;
		print_search_array(array + start, end + 1 - start);
		while (start < end)
		{
			middle = (start + end) / 2;
			if (array[middle] == value)
				return (middle);
			else if (array[middle] < value)
				start = middle + 1;
			else
				end = middle - 1;
			print_search_array(array + start, end + 1 - start);
		}
	}
	return (-1);
}
