#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: double pointer to the firs element
 * @n: data to insert in the first node
 * Return: updated list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));

	if (!new_head)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (new_head);

}
