#include "lists.h"

/**
 * sum_listint - returns sum of all data (n) of listint_t linked list
 * @head: 1st node in linked list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	for (current = head; current != NULL; current = current->next)
	{
		sum += current->n;
	}
	return (sum);
}
