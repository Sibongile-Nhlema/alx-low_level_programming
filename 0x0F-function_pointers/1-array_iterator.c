#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function given as parameter on each element of array
 * @array: given array
 * @size: size of array
 * @action: pointer to the functiono
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iter;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (iter = 0; iter < size; iter++)
		action(array[iter]);
}
