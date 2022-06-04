#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table or NULL in case of error.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;

    if (!size)
        return (NULL);

    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
	{
        free(new_table);
		return (NULL);
	}
    new_table->size = size;
    new_table->array = malloc(size * (sizeof(hash_node_t *)));
    return (new_table);
}
