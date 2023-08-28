#include "lists.h"

/**
 * get_nodeint_at_index - Returns Node at a certain index in a Linked list
 * @head: first node in Ze linked list
 * @index: index of the node to return
 *
 * Return: pnter to Ze node i am looking for, or 0   
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
