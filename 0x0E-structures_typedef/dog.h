#ifndef DOG_H
#define DOG_H

/**
 * struct dog - has name, age and owner info of dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 * Description: more info on dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 * and all prototypes for project
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

int _strlen(char *str);
char *_strcpy(char *dest, const char *src);

#endif
