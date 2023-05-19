#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: pointer to the allocated memory
 * if malloc fails - status value of 98
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;
	
	ptr = (char *)malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
