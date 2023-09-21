#include "lists.h"
#include <string.h>

size_t stringlen(const char *str);

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @str: data string
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = stringlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

/**
 * stringlen - find length of the string
 * @str: string
 *
 * Return: length of string
 */

size_t stringlen(const char *str)
{
	size_t len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}
