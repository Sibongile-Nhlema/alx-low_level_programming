#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  executes a function given as a parameter 
 * on each element of an array
 * @array: array
 * @size: amount of alem to print
 * @acrion: pointer in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
