#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @accept: substring
 * @s: String thats contains the substring
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}