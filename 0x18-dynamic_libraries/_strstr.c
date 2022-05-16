#include "main.h"

/**
 * _strstr - locates a substring.
 * @needle: substring to search
 * @haystack: String where search
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *phs;
	char *pnd;

	while (*haystack != '\0')
	{
		phs = haystack;
		pnd = needle;

		while (*haystack != '\0' && *pnd != '\0' && *haystack == *pnd)
		{
			haystack++;
			pnd++;
		}
		if (!*pnd)
			return (phs);
		haystack = phs + 1;
	}
	return (NULL);
}
