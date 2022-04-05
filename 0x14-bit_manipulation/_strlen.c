#include "main.h"
/**
 * _strlen - calculate the lenght of a string
 * @s: pointer to the character array.
 * Return: lenght of the string
 */
int _strlen(const char *s)
{
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
