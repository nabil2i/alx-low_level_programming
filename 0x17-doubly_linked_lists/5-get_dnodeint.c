#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: doubly linked list
 * @index: index of the node to retrieve
 *
 * Return: the address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;
	
	node = head;
	if (!head)
		return (NULL);

	i = 0;
	while (i < index)
	{
		node = node->next;
		i++;
	}
	return (node ? node : NULL);
}
