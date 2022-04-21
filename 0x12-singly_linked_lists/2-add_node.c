#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the first element of the list
 * @str: string of the new node
 * Return: the address of the new element or NULL is failure
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;
	int len = 0;

	while (str[len])
		len++;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = len;
		new_node->next = (*head);
		(*head) = new_node;
	}
	return (*head);

}
