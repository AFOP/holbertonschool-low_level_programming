#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    long unsigned int index;

    index = key_index((unsigned char *)"betty", 1024);

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    
    while(ht->array[index])
    	{
		printf("\nindex: %lu", index);
		printf("\nkey: %s\nvalue: %s\n", ht->array[index]->key, ht->array[index]->value);
    		ht->array[index] = ht->array[index]->next;
	}
    printf("\n---------------------\n\n    Updating value\n");
    printf("\n---------------------\n");
    hash_table_set(ht, "betty", "not cool");
    while(ht->array[index])
        {
		printf("\nindex: %lu", index);
                printf("\nkey: %s\nvalue: %s\n", ht->array[index]->key, ht->array[index]->value);
                ht->array[index] = ht->array[index]->next;
        }

    printf("\n---------------------\n\n    collision case\n");
    printf("\n---------------------\n");
    index = key_index((unsigned char *)"hetairas", 1024);
    hash_table_set(ht, "hetairas", "not cool man");
    hash_table_set(ht, "mentioner", "not cool man too?");
    while(ht->array[index])
        {
            printf("\nindex: %lu", index);
		    printf("\nkey: %s\nvalue: %s\n", ht->array[index]->key, ht->array[index]->value);
            ht->array[index] = ht->array[index]->next;
        }
    return (EXIT_SUCCESS);
}
