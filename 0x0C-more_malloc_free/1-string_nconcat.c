#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_len = 0, s2_len = 0;

	while (s1 && s1[s1_len])
		s1_len++;
	while (s2 && s2[s2_len])
		s2_len++;

	if (n < s2_len)
		str = malloc((s1_len + n + 1) * sizeof(char));
	else
		str = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (!str)
		return (NULL);

	i = 0;
	while (i < s1_len)
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;
	while (n < s2_len && i < (s1_len + n))
		str[i++] = s2[j++];

	while (n >= s2_len && i < (s1_len + s2_len))
		str[i++] = s2[j++];

	str[i] = '\0';

	return (str);
}
