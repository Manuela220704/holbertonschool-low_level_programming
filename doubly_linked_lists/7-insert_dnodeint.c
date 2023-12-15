#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	ptr = *h;
	count = 0;
	while (ptr != NULL)
	{
		if (count == idx)
		{
			ptr->prev->next = new_node;
			new_node->prev = ptr->prev;
			new_node->next = ptr;
			ptr->prev = new_node;
			return (new_node);
		}
		count++;
		ptr = ptr->next;
	}

	if (count == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
