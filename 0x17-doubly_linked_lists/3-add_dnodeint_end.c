#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to first node
 * @n: data value of the new node
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *endNode = malloc(sizeof(dlistint_t));

	if (endNode == NULL)
		return (0);

	endNode->n = n;
	endNode->next = NULL;

	while (*head != NULL)
	{
		*head = (*head)->next;
	}
	(*head)->next = endNode;
	endNode->prev = *head;
	/*printf("%d\n", endNode->n);*/
	return (endNode);
}
