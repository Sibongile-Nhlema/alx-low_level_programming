#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int j;
	char *newPtr, *oldPtr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	newPtr = malloc(new_size);

	if (newPtr == NULL)
		return (NULL);

	oldPtr = ptr;

	if (new_size < old_size)
	{
		j = 0;
		while (j < new_size)
		{
			newPtr[j] = oldPtr[j];
		       j++;
		}
	}

	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			newPtr[j] = oldPtr[j];
	}
	free(ptr);
	return (newPtr);
}
