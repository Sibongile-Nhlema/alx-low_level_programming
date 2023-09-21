#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: double pointer to first node
 * @str: string that stores all node
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_tail;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node_tail = malloc(sizeof(list_t));
	if (!new_node_tail)
		return (NULL);

	new_node_tail->str = strdup(str);
	new_node_tail->len = len;
	new_node_tail->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_tail;
		return (new_node_tail);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new_node_tail;
	return (new_node_tail);
}
