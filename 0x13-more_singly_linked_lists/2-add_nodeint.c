#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of listint_t list
 * @head: pointer to first node in list
 * @n: data in new node
 *
 * Return: address to new node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
