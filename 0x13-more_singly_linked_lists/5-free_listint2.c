#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: first node of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (!head)
		return;
	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	*head = NULL;
}
