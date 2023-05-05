#include "main.h"
/**
 *leet - function that encodes a string into 1337.
 @str: input
Return: value of n
*/

char *leet(char *str)
{
	char *result = str;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				result[i] = numbers[j];
				break;
			}
		}
	}
	return result;
}
