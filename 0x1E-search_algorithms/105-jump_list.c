#include "search_algos.h"

listint_t *jump_linear_search(listint_t *prev, size_t size, int value);
void print_checked_value(size_t index, int n);
listint_t *find_previous_node(listint_t *list, size_t index);

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
		if ((current->index != 0 && current->index % step == 0)
		    || current->next == NULL)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       current->index, current->n);
			/* check is value is present between the steps*/
			if (value <= current->n)
			{
				printf("Value found between indexes [%lu] and [%lu]\n",
				       (current->index - step), current->index);
				/* find previous node */
				prev = find_previous_node(list, current->index - step);
				/* perform linear search */
				return (jump_linear_search(prev, size, value));
			}
			else if (current->n <= value && current->next == NULL)
			{
				printf("Value found between indexes [%lu] and [%lu]\n",
				       (current->index - step + 1), current->index);
				/* find previous node */
				prev = find_previous_node(list, current->index - step);
				if (prev->index % step != 0)
				{
					tmp_prev = prev;
					prev = tmp_prev->next;
				}
				/* perform linear search */
				return (jump_linear_search(prev, size, value));
			}
		}
		/* check for value*/
		tmp = current;
		current = tmp->next;
	}
	return (NULL);
}

/**
 * print_checked_value - Print the value checked during the search.
 * @index: Index of the node checked.
 * @n: Value stored in the node.
 */
void print_checked_value(size_t index, int n)
{
	printf("Value checked at index [%lu] = [%d]\n", index, n);
}

/**
 * jump_linear_search - Perform linear search in the list.
 * @prev: Pointer to the previous node.
 * @size: Size of the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the node containing the value, or NULL if not found.
 */
listint_t *jump_linear_search(listint_t *prev, size_t size, int value)
{
	while (prev != NULL && prev->index < size && prev->n <= value)
	{
		print_checked_value(prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (prev);
}

/**
 * find_previous_node - Find the previous node based on the index.
 * @list: Pointer to the head of the list.
 * @index: Index of the node to find.
 *
 * Return: Pointer to the previous node.
 */
listint_t *find_previous_node(listint_t *list, size_t index)
{
	listint_t *prev = list;

	while (prev->next != NULL && prev->index != index)
		prev = prev->next;
	return (prev);
}
