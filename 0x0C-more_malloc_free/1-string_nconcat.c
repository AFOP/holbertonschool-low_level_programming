#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of s2 onto s1 and returns pointer
 * to the concatenated string
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: number of bytes to take from s2
 * Return: pointer to new concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len1 = 0, len2 = 0, len3 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n < len2)
		len2 = n;
	len3 = len1 + len2 + 1;

	s3 = malloc(len3 * sizeof(char));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s3[j] = s1[i];
		j++;
	}

	for (i = 0; i < len2; i++)
	{
		s3[j] = s2[i];
		j++;
	}

	s3[j] = '\0';
	return (s3);
}
