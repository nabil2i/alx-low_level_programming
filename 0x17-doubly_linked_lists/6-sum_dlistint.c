#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 *	of a dlistint_t linked list
 * @head: doubly linked list
 *
 * Return: sum od all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (!head)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
