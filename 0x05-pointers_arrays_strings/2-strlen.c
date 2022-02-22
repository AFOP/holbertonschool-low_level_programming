#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer of the string
 * Return: variable i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}
	return (i);
}
