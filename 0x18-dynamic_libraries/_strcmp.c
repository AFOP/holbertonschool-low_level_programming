#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: pointer type char
 * @s2: pointer type char
 * Return: a variable type int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
