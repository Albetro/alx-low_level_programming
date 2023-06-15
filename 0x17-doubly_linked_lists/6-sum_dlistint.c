#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a doubly linked list
 * @head: pointer to the head node
 * Return: sum of all the data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
	sum_data += current->n;
	current = current->next;
	}

	return (sum_data);
}
