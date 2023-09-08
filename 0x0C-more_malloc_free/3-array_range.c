#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	/*find size of array */
	int size;
	int *ar; /*allocate memory for array*/
	int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ar = malloc(size * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = min + i;

	return (ar);
}
