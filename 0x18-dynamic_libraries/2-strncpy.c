#include "main.h"

/**
 *_strncpy - copies a string n times
 * @dest: copy to
 * @src: copy from
 * @n: num of times string is copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
