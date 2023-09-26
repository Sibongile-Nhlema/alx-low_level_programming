#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *newAddition;
	unsigned int count = 0;

	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}

	if (count < idx)
		return (NULL);

	newAddition = malloc(sizeof(listint_t));

	if (newAddition == NULL)
		return (NULL);

	newAddition->n = n;

	if (idx == 0)
	{
		newAddition->next = *head;
		*head = newAddition;
	}
	else
	{
		newAddition->next = current->next;
		current->next = newAddition;
	}

	return (newAddition);
}
