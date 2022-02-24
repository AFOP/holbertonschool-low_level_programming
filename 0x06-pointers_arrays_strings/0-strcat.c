#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: pointer of the string one
 * @dest: pointer of the string two
 * Return: a pointer with the resulting of the string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
