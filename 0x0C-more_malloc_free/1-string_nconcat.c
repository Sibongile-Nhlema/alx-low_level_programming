#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return: pointer to allocated memory
 * if malloc fails - status value = 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len, s2_len, result_len, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	if (n > s2_len)
	{
		n = s2_len;
	}
	result_len = s1_len + n;
	result = malloc(result_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < result_len; i++)
	{
		if (i < s1_len)
		{
			result[i] = s1[i];
		}
		else
		{
			result[i] = s2[i - s1_len];
		}
	}
		result[i] = '\0';
		return (result);
}
