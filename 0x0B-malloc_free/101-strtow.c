#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int countWords(char *str);
int is_all_spaces(char *str);

/**
 * strtow -  function that splits a string into words
 * @str: string
 *
 * Return: number of words
 */

char **strtow(char *str)
{
	int word_count = countWords(str);
	int i, j, k, l;
	int word_length;
	char **words = malloc((word_count + 1) * sizeof(char *));

	if (str == NULL || *str == '\0' || is_all_spaces(str))
		return (NULL);

	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			word_length = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				word_length++;
				i++;
			}
			words[j] = malloc((word_length + 1) * sizeof(char));

			if (words[j] == NULL)
			{
				for (l = 0; l < j; l++)
					free(words[l]);
				free(words);
				return (NULL);
			}

			for (k = 0; k < word_length; k++)
				words[j][k] = str[i - word_length + k];

			words[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (words);
}

/**
 * countWords - counts words
 * @str: string
 * Return: number of words
 */

int countWords(char *str)
{
	int word_count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			word_count++;
		}
		i++;
	}
	return (word_count);
}

/**
 * is_all_spaces - checks for empty spaces
 * @str: string
 * Return: nothing
 */

int is_all_spaces(char *str)
{
	while (*str != '\0')
	{
		if (*str != ' ')
			return (0);
		str++;
	}
	return (1);
}
