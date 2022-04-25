#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a list
 * @head: linked list
 * Return: the sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
