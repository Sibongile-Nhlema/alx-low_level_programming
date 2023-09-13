#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index -  function that searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp:pointer to the function used to compare values.
 * Return:index of 1st element for which cmp function !return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int iter;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (iter = 0; iter < size; iter++)
	{
		if (cmp(array[iter]))
			return (iter);
	}
	return (-1);
}
