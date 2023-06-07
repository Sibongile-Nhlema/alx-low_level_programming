#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head of listint_t
 *
 * Return: if list not looped
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *visited[1024] = {NULL};

	while (current != NULL)
	{
		size_t i;

		for (i = 0; i < count; i++)
		{
			if (visited[i] == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
		}
		visited[count] = current;
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		current = current->next;
	}
	return (count);
}
