#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to first element
 *
 * Return:  head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	listint_t *temp = *head;
	*head = (*head)->next;
	int data = temp->n;

	free(temp);

	return (data);
}
