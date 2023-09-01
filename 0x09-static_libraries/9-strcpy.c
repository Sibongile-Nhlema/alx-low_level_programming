#include "main.h"

/**
 * char *_strcpy - a function that copies the string
 * @src: copy from
 * @dest: copy to
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int l = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
