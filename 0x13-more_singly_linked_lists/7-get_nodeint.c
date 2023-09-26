#include "lists.h"

/**
 * get_nodeint_at_index - finds nth node (searches)
 * @head: pointer to the first node
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *temp = head;

	while (temp != NULL && k < index)
	{
		temp = temp->next;
		k++;
	}

	if (temp == NULL)
		return (NULL);
	else
		return (temp);
}
