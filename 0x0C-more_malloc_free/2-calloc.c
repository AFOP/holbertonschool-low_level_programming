#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  _calloc - allocates memory for an array, using malloc.
 *  @nmemb: number of elemets in array
 *  @size: size of in bytes the type n
 *  Return: pointer to first element of new array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
	{
		free(memory);
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
		memory[i] = 0;

	return (memory);
}
