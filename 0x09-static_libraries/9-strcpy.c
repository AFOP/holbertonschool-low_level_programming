#include "main.h"

/**
 * _strcpy - copies the string pointed.
 * @dest: pointer of the string
 * @src: pointer of the string
 * Return: the variable dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}
