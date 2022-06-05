#include "hash_tables.h"

/**
 * hash_table_delete -  function that deletes a hash table.
 * @ht: is the hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
    long unsigned int i;

    for (i = 0; i < ht->size; i++)
    {
        free(ht->array[i]);
    }
    free(ht);
}
