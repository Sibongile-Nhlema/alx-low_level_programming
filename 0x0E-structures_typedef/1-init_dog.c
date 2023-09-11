#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a type of struct dog
 * @d: dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));/* allocate memory from the stack*/
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
