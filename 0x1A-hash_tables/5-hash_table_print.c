#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, state = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (ht->array[0] == NULL && state == 0)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			state = 1;
		}
		else if (ht->array[0] == NULL)
			printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		while (ht->array[i]->next != NULL)
		{
			ht->array[i] = ht->array[i]->next;
			printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}
	}
	printf("}\n");
}
