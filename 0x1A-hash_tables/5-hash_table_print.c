#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
	{
		printf("{}\n");
		return;
	}
	if (!ht->array)
	{
		printf("{}");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (ht->array[0] == NULL)
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
	}
	printf("}\n");
}
