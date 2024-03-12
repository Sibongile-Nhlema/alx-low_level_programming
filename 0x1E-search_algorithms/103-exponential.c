#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search
 * Return: first index where value is located or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1, i, left, right, mid;

	if (array == NULL)
		return (-1);

	while (index <= size - 1 && array[index] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       index, array[index]);
		index *= 2;
	}
	/* Adjust index if it exceeds size */
	left = index / 2;
	if (index >= size)
		right = size - 1;
	else
		right = index;

	printf("Value found between indexes [%lu] and [%lu]\n",
	       left, right);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array:");
		for (i = left; i <= right; ++i)
		{
			printf(" %d", array[i]);
			if (i < right)
				printf(",");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
