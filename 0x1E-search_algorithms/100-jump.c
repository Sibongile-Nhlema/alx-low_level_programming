#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump_step = sqrt(size);
    size_t i, low = 0, high = jump_step;

    if (array == NULL)
        return (-1);

    printf("Value checked array[%lu] = [%d]\n", low, array[low]);
    while (high < size && array[high] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", high, array[high]);
        low = high;
        high += jump_step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", low, high);

    for (i = low; i <= high && i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
