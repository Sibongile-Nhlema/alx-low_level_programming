#include "search_algos.h"

/**
 * advanced_binary -  searches for a value in an array of integers
 * using the binary search algorithm
 * @array: pointer to the first element of the array
 * @size:  the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, index;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array:");
		for (index = left; index <= right; index++)
		{
			printf(" %d", array[index]);
			if (index < right)
				printf(",");
		}
		printf("\n");

		/* check surrounding indexes for the same value*/
		while (array[mid] == value)
		{
			if (array[mid - 1] == value)
			{
				/* check backwards */
				while (array[mid - 1] == value)
					mid--;
			}
			return (mid);
		}
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
