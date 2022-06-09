#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 *      in a linked dlistint_t list
 * @h: doubly linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements;

	elements = 0;
	if (!h)
		return (elements);
	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
