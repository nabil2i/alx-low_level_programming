#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the first element of the list
 * @str: constant pointer
 * Return: the address of the new element of NULL if failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	last = *head;

	while (str[len])
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (*head);


}
