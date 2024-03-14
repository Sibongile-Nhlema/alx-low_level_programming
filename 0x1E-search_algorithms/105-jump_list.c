#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not present or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current, *tmp;
	size_t i, step = sqrt(size);

	if (list == NULL)
		return (NULL);

	printf("step = %lu\nvalue = %d\n", step, value);
	/*check list */
	i = 0;
	while (i <= step)
	{
		tmp = list;
		current = tmp->next;
		i++;
	}
	printf("current = %d\n", current->n);
	while (current->next != NULL)
	{
		tmp = current;
		printf("I am valid\n");
		current = tmp->next;
	}
	return (NULL);
}

