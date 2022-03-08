#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string duplicate string str
 * @str: pointer with the string
 * Return: pointer or error
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			i++;
		}
		array = malloc(sizeof(char) * i + 1);
		for (j = 0; j <= i; j++)
		{
			array[j] = str[j];
		}
		return (array);
	}
}
