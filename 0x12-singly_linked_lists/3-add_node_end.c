#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: double pointer to list_t
 * @str: string
 *
 * Return: address of new element, else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *element;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	element = malloc(sizeof(list_t));
	if (!element)
		return (NULL);

	element->str = strdup(str);
	element->len = len;
	element->next = NULL;

	if (*head == NULL)
	{
		*head = element;
		return (element);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = element;
	return (element);
}
