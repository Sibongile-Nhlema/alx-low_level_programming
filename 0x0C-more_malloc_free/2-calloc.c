#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalSize = nmemb * size;
	void *ptr;

	if (totalSize == 0)
		ptr = malloc(1);
	else
		ptr = malloc(totalSize);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, totalSize);

	return (ptr);
}

/**
 * _memset - sets memory with a byte
 * @s: memory area
 * @b: char
 * @n: number of times to copy b
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
