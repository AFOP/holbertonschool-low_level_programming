#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer of the string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, c;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (c = i / 2; c <= i; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
