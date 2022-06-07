#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer of hash table
 * @key: where key is the key
 * @value: is the value associated with the key, can be empty
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy_k, *copy_v;
	hash_node_t *node;
	unsigned long int s = 0;

	if (!ht || !key || !value)
		return (0);
	copy_k = strdup(key);
	copy_v = strdup(value);
	s = key_index((unsigned char *)key, ht->size);
	if (ht->array[s] && strcmp(ht->array[s]->key, key) == 0)
	{
		free(ht->array[s]->value);
		ht->array[s]->value = copy_v;
		return (1);
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(copy_k);
		free(copy_v);
		free(node);
		return (0);
	}
	if (copy_k == NULL)
	{
		free(copy_k);
		free(copy_v);
		free(node);
		return (0);
	}
	node->key = copy_k;
	node->value = copy_v;
	node->next = ht->array[s];
	ht->array[s] = node;
	return (1);
}
