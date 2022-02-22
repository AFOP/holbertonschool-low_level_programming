#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer of the string
 * @c: variable for save the string s
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;
	char *c = s;

	while (c[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(c[--i]);
	}
	_putchar('\n');
}
