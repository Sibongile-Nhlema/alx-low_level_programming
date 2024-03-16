#include "search_algos.h"

/**
 * linear_skip - function that searches for a value
 * in a sorted skip list of integers.
 * @list: pointer to the head of the skip list to search in
 * @value: the value to search for
 * Return: a pointer on the first node where value is located or NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list->express, *tmp, *prev = list, *tmp_prev;

	if (list == NULL)
		return (NULL);

	current = list->express;
	prev = list;
	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       current->index, current->n);
		if ((current->n >= value) ||
		    (prev->n >= value && prev->express != NULL))
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       prev->index, current->index);
			while (prev->index < current->index || prev->express == NULL)
			{
				printf("Value checked at index [%lu] = [%d]\n",
				       prev->index, prev->n);
				if (prev->n == value)
				{
					return (prev);
				}
				tmp_prev = prev;
				prev = tmp_prev->next;
				if (prev == NULL)
					return (NULL);
			}
		}
		tmp_prev = prev;
		prev = tmp_prev->express;
		tmp = current;
		current = tmp->express;
	}
	return (NULL);
}
