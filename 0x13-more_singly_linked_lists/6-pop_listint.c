#include "lists.h"

/**
 * pop_listint - deleted head node of a linked list
 * @head: double pointer to the first node of the list
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	int deletedNode;
	listint_t *temp;

	if (!*head || !head)
		return (0);

	temp = *head;
	deletedNode = (*temp).n;
	*head = (*head)->next;
	free(temp);

	return (deletedNode);
}
