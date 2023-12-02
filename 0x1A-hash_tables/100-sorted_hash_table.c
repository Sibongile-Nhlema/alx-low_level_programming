#include "hash_tables.h"

/**
 * shash_table_create - function that creates a hash table
 * @size: size of the hash table
 * Return: pointer to  the newly created table, or NULL on error
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new_table = (shash_table_t *)malloc(sizeof(shash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = (shash_node_t **)malloc(sizeof(shash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	return (new_table);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key (cannot be an empty string)
 * @value: value associated with the key
 *
 * value must be duplicated. value can be an empty string
 * Return:1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_element, *current, *prev;

	if (key == NULL || ht == NULL || *key == '\0')
		return (0);

	new_element = malloc(sizeof(shash_node_t));
	if (new_element == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	prev = NULL;

	while (current != NULL && strcmp(current->key, key) < 0)
	{
		prev = current;
		current = current->next;
	}

	if (current != NULL && strcmp(current->key, key) == 0)
	{
		free(new_element);
		free(current->value);
		current->value = strdup(value);
		return (1);
	}

	new_element->key = strdup(key);
	new_element->value = strdup(value);

	if (prev == NULL)
	{
		new_element->next = ht->array[index];
		ht->array[index] = new_element;
	}
	else
	{
		prev->next = new_element;
		new_element->next = current;
	}

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key being searched looking for
 * Return: value associated with the element, or NULL if key couldnt be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *current;
	int node_printed = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (node_printed && current != NULL)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			node_printed = 1;
			current = current->next;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the contents of a hash table in reverse
 * @ht: hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *current;
	int node_printed = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (node_printed && current != NULL)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			node_printed = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a hash table. (doubly)
 * @ht: hash table
 */

void shash_table_delete(shash_table_t *ht)
{
        unsigned long int i = 0;
        shash_node_t *current, *temp;

        if (ht == NULL)
                return;

        for (i = 0; i < ht->size; i++)
        {
                current = ht->array[i];
                while (current)
                {
                        temp = current;
                        current = current->next;
                        if (temp->key)
                                free(temp->key);
                        if (temp->value)
                                free(temp->value);
                        free(temp);
                }
        }
        free(ht->array);
        free(ht);
}
