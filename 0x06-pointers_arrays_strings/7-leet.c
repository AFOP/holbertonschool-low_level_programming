#include "main.h"
#include <stdio.h>

/**
 * leet - convert string into 1337
 * @s: string
 *
 * Return: pointer to string
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char rep[] = "aA44Ee33oO00tT77lL11";

	while (s[i])
	{
		if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' ||
			s[i] == 'O' || s[i] == 'o' || s[i] == 'T' || s[i] == 't' ||
			s[i] == 'L' || s[i] == 'l')
		{
			j = 0;
			while (s[i] != rep[j] && j < 20)
			{
				j++;
			}
			s[i] = rep[j + 2];
		}
	i++;
	}
	return (s);
}
