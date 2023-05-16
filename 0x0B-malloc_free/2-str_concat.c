#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string
 * Return: new string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0;
	unsigned int j;
	unsigned int length = 0;
	unsigned int length2 = 0;

	while (s1 && s1[length])
	{
		length++;
	}
	while (s2 && s2[length2])
	{
		length2++;
	}
	s3 = malloc(sizeof(char) * (length + length2 + 1));

	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < length)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (length + length2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
