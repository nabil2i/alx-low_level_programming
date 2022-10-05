#include "search_algos.h"

/**
 * print_search_array - print the array that is being
 * seach into
 * @array: pointer to the array to print
 * @size: size of the array
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
 * binary_search - searches for a value in an array
 * if integers using the  algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 * or -1 if value is not present or if array NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, middle;

	if (!array || size <= 0)
	{
		return (-1);
	}

	start = 0;
	end = size - 1;
	print_search_array(array + start, end + 1 - start);
	while (start < end)
	{
		middle = (start + end) / 2;
		if (array[middle] < value)
			start = middle + 1;
		else if (array[middle] > value)
			end = middle - 1;
		else
			return (middle);
		print_search_array(array + start, end + 1 - start);
	}
	return (-1);
}
