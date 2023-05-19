#include "main.h"
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: pointer to new array
 * if man > mix return NULL
 * if malloc fails return NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
