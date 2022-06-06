#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
     hash_table_t *ht;

    ht = hash_table_create(10);
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
