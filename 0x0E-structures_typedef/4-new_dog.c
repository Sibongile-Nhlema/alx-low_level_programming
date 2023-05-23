#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns string length
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copies string to src
 * @dest: pointer to buffer
 * @src: string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, const char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: pointer, otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = malloc(_strlen(name) + 1);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(_strlen(owner) + 1);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}
