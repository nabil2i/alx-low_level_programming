#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns the number of elements in a list
 * @h: pointer to the first element of the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{

	size_t nodes_count;

	nodes_count = 0;
	while (h != NULL)
	{
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
