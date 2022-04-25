#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
