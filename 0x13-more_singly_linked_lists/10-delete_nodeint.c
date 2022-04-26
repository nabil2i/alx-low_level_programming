#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: first node of the list
 * @index: index where to delete the node
 * Return: 1 if succeeded and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nextn;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	temp = *head;
	i = 0;
	while (i < index - 1)
	{
		if (!temp->next)
			return (-1);
		temp = temp->next;
		i++;
	}

	nextn = temp->next;
	temp->next = nextn->next;
	free(nextn);
	return (1);
}
