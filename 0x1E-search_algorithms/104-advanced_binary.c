#include "search_algos.h"

int advanced_binary_recursive(int *array, size_t left,
			      size_t right, int value);
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
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the array
 * @right: Right index of the array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left,
			      size_t right, int value)
{
	size_t mid, i;

	if (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			printf(" %d", array[i]);
			if (i < right)
				printf(",");
		}
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			else
				return (advanced_binary_recursive(array, left,
								 mid - 1, value));
		}
		else if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, right, value));
		else
			return (advanced_binary_recursive(array, left, mid - 1, value));
	}
	return (-1);
}
