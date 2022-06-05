#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i, cont;

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
    cont = (ht->size) - 1;
    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] == NULL)
            continue;
        printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
        printf("%lu\n", i);
        printf("%lu\n", cont);
        if (i == cont)
            break;
        printf(", ");
    }
    printf("}\n");
}
