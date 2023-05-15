#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, initializes it with a char
 * @size: number of bytes
 * @c: char
 * @Return: a pointer to array or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		array[size] = c;
	}
	return (array);
}
