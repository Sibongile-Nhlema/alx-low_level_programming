#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: size of elem in array
 * @cmp: function pointer
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
