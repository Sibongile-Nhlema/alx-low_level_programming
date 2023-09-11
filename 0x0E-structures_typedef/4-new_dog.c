#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, const char *src);

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: pointer to new dog, NULL on error
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* allocate memory */
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	/* create memory for name and owner */
	new_dog->name = (char *)malloc(_strlen(name) + 1);
	new_dog->owner = (char *)malloc(_strlen(owner) + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	/*copy string into space */
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, const char *src)
{
	size_t len = 0;
	size_t i;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++);

	return (length);
}
