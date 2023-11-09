#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to first elements
 * @n: data stored in node
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;

	if (temp == NULL)
	{
		temp = newNode;
		newNode->next = NULL;
	}
	else
	{
		newNode->next = (*head);
		newNode->prev = NULL;
		temp = newNode;
	}
	/*printf("%d\n",newNode->n);*/
	return (temp);
}
