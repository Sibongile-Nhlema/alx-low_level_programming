#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes it with char
 * @size: size of memory allocated
 * @c: char
 *
 * Return: pointer to arrat or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL) /* case of a fail */
		return (NULL);

	for (i = 0; i < size; i++) /*iterate through array */
		ar[i] = c;

	return (ar);
}
