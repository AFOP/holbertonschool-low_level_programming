#include "main.h"

/**
 * puts2 - prints character of a string, starting with the first character
 * @str: pointer of the string
 * Return: the character s
 */
void puts2(char *str)
{
	int i, c;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (c = 0; c < i; c += 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
