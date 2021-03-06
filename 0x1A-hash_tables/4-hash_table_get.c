#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int s = 0;
	char *value;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);
	s = key_index((unsigned char *)key, ht->size);
	if (ht->array[s] == NULL)
		return (NULL);
	while (ht->array[s])
	{
		if (strcmp(ht->array[s]->key, key) == 0)
			value = ht->array[s]->value;
		ht->array[s] = ht->array[s]->next;
	}
	return (value);
}
