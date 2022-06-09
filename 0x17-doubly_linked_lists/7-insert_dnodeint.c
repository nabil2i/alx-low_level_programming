#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 *	at a given position
 * @h: pointer to the head of the list
 * @idx: index where to add the node
 * @n: new data
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cursor, *new;
	unsigned int i;


	cursor = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	i = 0;
	while (cursor && i < idx)
	{
		if (i == idx - 1)
		{
			if (cursor->next == NULL)
				return (add_dnodeint_end(h, n));

			new->prev = cursor;
			new->next = cursor->next;
			cursor->next->prev = new;
			cursor->next = new;
			return (new);
		}
		else
			cursor = cursor->next;
		i++;
	}
	return (NULL);
}
