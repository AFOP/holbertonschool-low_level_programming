#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it with a specific char
 * @size: size of array
 * @c: character of array
 * Return: pointer or error
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array = malloc(sizeof(char) * size);
		if (array == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				array[i] = c;
			}
			return (array);
		}
	}
}
