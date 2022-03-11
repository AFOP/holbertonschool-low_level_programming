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
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
