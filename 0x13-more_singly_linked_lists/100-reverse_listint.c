#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: first node of the linked list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentn, *prevn, *nextn;
	unsigned int i;

	prevn = NULL;
	currentn = *head;
	nextn = *head;

	i = 0;
	while (nextn)
	{
		nextn = currentn->next;
		currentn->next = prevn;
		prevn = currentn;
		currentn = nextn;
		i++;
	}
	*head = prevn;
	return (*head);
}
