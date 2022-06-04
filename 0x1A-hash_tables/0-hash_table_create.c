#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table or NULL in case of error.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array;

	if (!size)
		return (NULL);

	array = malloc(sizeof(hash_table_t) * size);
	if (array == NULL)
		return (NULL);
	return (array);
}
