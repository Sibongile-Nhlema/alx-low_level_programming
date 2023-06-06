#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to 1st element in linked list
 * @index: node to return;s index
 *
 * Return: data inside deleted element or 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;

	for (i = 0; i < index && node != NULL; i++)
	{
		node = node->next;
	}
	return (node);
}
