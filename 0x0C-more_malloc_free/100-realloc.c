#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _realloc - eallocates a memory block using malloc and free
 * @ptr: pointer to memory
 * @old_size: size of space of ptr
 * @new_size: new size of new memory block
 * Return: ptr
 * if new_size == old_size - return ptr
 * if malloc fails, return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (ptr);
}
