#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - eturns a pointer to a space in memory with a string
 * @str: string
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, length;

	i = 0;
	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	dup = malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	while ((dup[i] = str[i]) != '\0')
	{
		i++;
	}
	return (dup);
}
