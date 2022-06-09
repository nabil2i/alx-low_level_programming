#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 *	at index index of a dlistint_t linked list
 * @head: pointer to the list
 * @index: index of the node to delete
 *
 * Return:  1 if success and 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *nodefree;
	unsigned int i;

	temp = *head;
	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		if ((*head)->next)
			(*head)->next->prev = NULL;
		(*head)->next = NULL;
		free(*head);
		*head = temp;
		return (1);
	}

	temp = *head;
	i = 0;
	while (i < index - 1)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
		i++;
	}
	nodefree = temp->next;
	temp->next = nodefree->next;
	nodefree->next->prev = temp;
	free(nodefree);
	return (1);
}
