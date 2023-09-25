#include "lists.h"

/**
 * listint_len - counts the number of element
 * @h: pointer to the linked list
 *
 * Return: number of elements in a linked lists
 */

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
