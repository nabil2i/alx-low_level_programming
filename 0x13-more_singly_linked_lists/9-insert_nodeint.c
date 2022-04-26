#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first node in the list
 * @idx: index where to add the new node
 * @n: data of the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cursor, *new;
	unsigned int i;

	cursor = *head;
	i = 0;
	while (cursor && i < idx - 1)
	{
		cursor = cursor->next;
		i++;
	}
	if (!cursor)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = cursor->next;
	cursor->next = new;

	return (new);

}
