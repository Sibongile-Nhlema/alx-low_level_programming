#include "lists.h"
#include <stdio.h>



/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to 1st node
 *
 * Return: pointer to 1st node in list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
