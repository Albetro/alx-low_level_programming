#include "lists.h"

/**
 * insert_nodeint_at_index -a code that inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *m;

	m = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && m != NULL; i++)
		{
			m = m->next;
		}
	}

	if (m == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = m->next;
		m->next = new;
	}

	return (new);
}
