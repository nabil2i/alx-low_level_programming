#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: first node of the list
 * @n: data of the new node
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new  = malloc(sizeof(listint_t));

	if (new)
	{
		listint_t *last = *head;

		new->n = n;
		new->next = NULL;
		if (*head == NULL)
		{
			(*head) = new;
			return (new);
		}
		while (last->next)
		{
			last = last->next;
		}
		last->next = new;
		return (new);
	}
	return (NULL);
}
