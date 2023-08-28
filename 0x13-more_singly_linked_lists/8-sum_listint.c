#include "lists.h"

/**
 * sum_listint - calcul of ze sum of all ze data in a listint_t list
 * @head: first node in the Linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
