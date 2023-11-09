#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: head/ pointer to first node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
