#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes;
	long int diff;

	if (!head)
		exit(98);

	nodes = 0;
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;

		diff = head - head->next;
		if (diff > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (nodes);
}
