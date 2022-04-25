#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a list
 * @head: first node of the list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = temp->next;
	free(temp);
	return (n);
}

