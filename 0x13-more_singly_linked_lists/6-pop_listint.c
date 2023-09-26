#include "lists.h"

/**
 * pop_listint - deleted head node of a linked list
 * @head: double pointer to the first node of the list
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (1);

	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (temp->n);
}
