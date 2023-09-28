#include "lists.h"
#include <stdio.h>

size_t looped_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check
 *
 * Return: If the list is not looped - 0
 */

size_t looped_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;

			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints list safely
 * @head: pointer to head of list
 *
 * Return: number of node in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, idx = 0;

	nodes = looped_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < nodes; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

