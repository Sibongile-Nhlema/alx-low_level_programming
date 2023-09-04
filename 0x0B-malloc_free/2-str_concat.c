#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++; /*find lengths of both strings*/
	while (s2[len2] != '\0')
		len2++;

	concat = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i]; /*copy s1 to string*/
	for (j = 0; j < len2; j++)
		concat[i++] = s2[j]; /*copy s2 to string*/

	concat[i] = '\0';

	return (concat);
}
