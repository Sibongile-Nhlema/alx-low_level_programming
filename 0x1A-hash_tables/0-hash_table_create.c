#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the hash table
 * Return: pointer to  the newly created table, or NULL on error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	/*if memory allocation fails*/
	if (new_table == NULL)
	{
		return (NULL);
	}

	new_table->size = size;
	new_table->array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);

	/*if memory allocation fails*/
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/*Initialize each cell of the array to NULL*/
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	return (new_table);
}

