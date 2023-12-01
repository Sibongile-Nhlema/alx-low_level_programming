#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key (cannot be an empty string)
 * @value: value associated with the key
 *
 * value must be duplicated. value can be an empty string
 *
 * Return:1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_element;

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);

	if (key == NULL || ht == NULL || *key == '\0')
	{
		free(new_element);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);

	new_element->key = strdup(key);
	new_element->value = strdup(value);
	new_element->next = ht->array[index];


	ht->array[index] = new_element;

	return (1);
}
