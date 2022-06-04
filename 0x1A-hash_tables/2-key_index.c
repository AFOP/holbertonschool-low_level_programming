#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: where key is the key
 * @size: is the size of the array of the hash table
 * Return: the index at which the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = 0;
	unsigned long int s = 0;

	if (!key || !size)
		return (0);

	s = hash_djb2(key);
	hash_value = s % size;

	return (hash_value);
}
