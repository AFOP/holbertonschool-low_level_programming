#include "main.h"
/**
 * _strncpy - copies a string.
 * @src: pointer of the string one
 * @dest: pointer of the string two
 * @n: number of characteres for show
 * Return: a pointer with the resulting of the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
