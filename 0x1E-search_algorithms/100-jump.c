#include "search_algos.h"
#include <math.h>

int linear_search(int *array, size_t size, int value);

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search
 * Return: the first index where value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	int *tmp;
	size_t jump_step = sqrt(size), low, high, count = 2;

	if (array == NULL)
		return (-1);

	high = jump_step;
	while (high <= size)
	{
		low = high - jump_step;
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		if (value <= array[high])
		{
			tmp = &array[low];
			printf("Value found between indexes [%lu] and [%lu]\n", low, high);
			return (linear_search(tmp, jump_step, value));
		}
		/* not found inbetween low and high */
		low = jump_step * count;
		printf("jump_step = %lu\n", jump_step);
		printf("low = %lu\n", low);
		count++;
		printf("count = %lu\n", count);
		high = jump_step * count;
		printf("high = %lu\n", high);
	}
	
	return (-1);
}

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the value or -1 if the array is NULL or
 * the value is not present
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Linear search: Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
