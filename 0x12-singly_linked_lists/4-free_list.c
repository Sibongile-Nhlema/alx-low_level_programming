#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: pointer to the first node
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *temp = current;
		current = current->next;

		free(temp->str);
		free(temp);
	}
}
