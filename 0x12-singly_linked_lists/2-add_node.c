#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: Double Pointer to the head of the list_t list
 * @str: new string to add in the node
 *
 * Description: Function adds a new node at the beginning of a linked list
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
	return (NULL);
	}

	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
