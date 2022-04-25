#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: first nodes in the list
 * @n: data of the new node
 * Return: linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new = malloc(sizeof(listint_t));

	if (new)
	{
		new->n = n;
		new->next = (*head);
		(*head) = new;
		return (new);
	}
	return (NULL);
}
