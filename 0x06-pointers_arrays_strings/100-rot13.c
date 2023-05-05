#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: result
 */

char *rot13(char *str)
{
	char *result = str;

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 'a';
			j = (j + 13) % 26;
			result[i] = 'a' + j;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 'A';
			j = (j + 13) % 26;
			result[i] = 'A' + j;
		}
	}
	return (result);
}
