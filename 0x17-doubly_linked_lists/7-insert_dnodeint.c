#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the first node
 * @idx: position to insert node
 * @n: data for node
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);

	if (h == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	temp = *h;
	while (temp != NULL)
	{
		if (idx == 0)
		{
			new_node->prev = NULL;
			new_node->next = temp;
			temp = new_node;
		}
		count++;
		if (idx == count)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
		}
		temp = temp->next;
	}

	if (count < idx)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
