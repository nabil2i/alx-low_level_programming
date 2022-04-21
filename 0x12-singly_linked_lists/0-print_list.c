#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the first element of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes_count;

	nodes_count = 0;
	while (h != NULL)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		nodes_count++;
		h = h->next;
	}
	return (nodes_count);


}
