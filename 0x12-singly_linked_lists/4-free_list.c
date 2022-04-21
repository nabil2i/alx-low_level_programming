#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: pointer to the first element of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{

	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
