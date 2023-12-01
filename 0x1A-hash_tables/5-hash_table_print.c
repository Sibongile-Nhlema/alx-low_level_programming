#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;
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
