#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: buffer pointed
 * @src: pointed by src
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
