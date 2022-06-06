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

	if (!key)
		return (0);
	s = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}
	copy_k = strdup(key);
	copy_v = strdup(value);
	if (copy_k == NULL)
	{
		free(copy_k);
		return (0);
	}
	node->key = copy_k;
	node->value = copy_v;
	node->next = ht->array[s];
	ht->array[s] = node;
	return (1);
}
