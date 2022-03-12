#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  array_range - creates an array of integers, ordered from min to max.
 *  @min: number to start
 *  @max: number to finally
 *  Return: pointer to newly created array or NULL if fail.
 */
int *array_range(int min, int max)
{
	int i, len, *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
