#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: linked list
 * @index: index of the node
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor;
	unsigned int i;

	cursor = head;
	for (i = 0; i <= index; i++)
	{
		cursor = cursor->next;
	}

	if (cursor)
	{
		return (cursor);
	}
	return (NULL);

}
