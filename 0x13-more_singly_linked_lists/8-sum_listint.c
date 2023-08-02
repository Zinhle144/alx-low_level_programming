#include "lists.h"

/**
 * sum_listint - sums up of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum or NULL if the list is empty
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
