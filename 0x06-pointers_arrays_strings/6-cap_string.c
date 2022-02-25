#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: pointer with the content of the string
 * Return: the content of one pointer
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
			str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
			str[i] == '"' || str[i] == 40 || str[i] == 41 || str[i] == '{' ||
			str[i] == '}')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else
			i++;
	}

	return (str);
}
