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
	listint_t *current, *tmp, *prev, *tmp_prev;
	size_t step = sqrt(size);

	if (list == NULL)
		return (NULL);
	/*check list */
	current = list;
	while (current)
	{
		/* check if current's index is a factor of step */
		if ((current->index != 0 && current->index % step == 0) || current->next == NULL)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       current->index, current->n);
			/* check is value is present between the steps*/
			if (value <= current->n)
			{
				printf("Value found between indexes [%lu] and [%lu]\n",
				       (current->index - step), current->index);
				/* find previous node */
				prev = list;
				while  (prev->next != NULL && prev->index != (current->index - step))
				{
					tmp_prev = prev;
					prev = tmp_prev->next;
				}
				/* perform linear search */
				while (prev->n <= value)
				{
					printf("Value checked at index [%lu] = [%d]\n",
					       prev->index, prev->n);
					if (prev->n == value)
						return (prev);
					tmp_prev = prev;
					prev = tmp_prev->next;
				}
				return (prev);
			}
			else if (current->n <= value && current->next == NULL)
			{
				printf("Value found between indexes [%lu] and [%lu]\n",
				       (current->index - step), current->index);
                                /* find previous node */
                                prev = list;
                                while  (prev->next != NULL && prev->index != (current->index - step))
                                {
                                        tmp_prev = prev;
                                        prev = tmp_prev->next;
                                }
				/* perform linear search */
				while (prev != NULL && prev->index < size && prev->n < value)
				{
					printf("Value checked at index [%lu] = [%d]\n",
					       prev->index, prev->n);
					if (prev->n == value)
						return (prev);
					tmp_prev = prev;
					prev = tmp_prev->next;
				}
			}
		}
		/* check for value*/
		tmp = current;
		current = tmp->next;
	}
	return (NULL);
}

