#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index index of listint_t
 * @head: pointer to 1st element
 * @index: index of node to delete
 *
 * Return: 1 on success or -1 on error
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;
	previous = NULL;

	for (i = 0; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	if (previous == NULL)
	{
		*head = current->next;
	}
	else
	{
		previous->next = current->next;
	}

	free(current);

	return (1);
}
