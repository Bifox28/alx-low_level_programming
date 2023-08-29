#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * Add_node - adds a NEW node at the starting of a linked list
 * @head: Double Pointer to << list_t list
 * @str: new string to add in the node
 *
 * Return: ADDRESS of New element, or NULL (0) if it fails
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
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
