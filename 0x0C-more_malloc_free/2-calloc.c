#include "main.h"
#include <stdio.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements.
 * @size: size of bytes.
 * Return: pointer to allocated memory.
 * if nmemb or size is 0, return NULL.
 * if malloc fail - return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < (nmemb * size); j++)
	{
		ptr[j] = 0;
	}
	return (ptr);
}
