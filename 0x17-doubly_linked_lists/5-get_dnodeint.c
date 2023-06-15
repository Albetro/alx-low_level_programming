#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to the head node
 * @index: position of the node to be returned
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int counter = 0;

	while (current != NULL)
	{
	if (counter == index)
		return (current);

	current = current->next;
	counter++;
	}

	return (NULL); /* Node does not exist at the specific position */
}
