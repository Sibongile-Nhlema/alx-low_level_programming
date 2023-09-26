#include "lists.h"

/**
 * sum_listint - calculate sum of all data(n) of a  linked list
 * @head: pointer to the address of the first node
 * Return: the sum of all the data(n)
 */

int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		result += current->n;
		current = current->next;
	}
	return (result);
}
