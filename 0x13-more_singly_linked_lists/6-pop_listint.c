
#include "lists.h"

/**
 * pop_listint -a code that deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	num = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (num);
}
