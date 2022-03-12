#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings using malloc
 * @s1: string one
 * @s2: string two
 * @n: bytes of s2
 * Return: point with the string concatenated or NULL if fail.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	concat = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
	if (concat == NULL)
	{	
		free(concat);
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
