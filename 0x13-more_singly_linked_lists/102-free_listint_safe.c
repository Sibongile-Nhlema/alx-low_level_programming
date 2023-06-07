#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to head of list
 *
 * Return: size of list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next, *slow, *fast;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	*h = NULL;

	slow = current;
	fast = current->next;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			free(current);
			current = fast->next;
			size++;

			while (current != fast)
			{
				next = current->next;
				free(current);
				current = next;
				size++;
			}
			free(fast);
			return (size);
		}
	}

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
		size++;
	}
	return (size);
}
