#include "main.h"
/**
 * print_line - print n line
 * @n: number in main
 * Return: always 0
 */
void print_line(int n)
{
	int i, max;

	max = n;
	for (i = 1; i < max; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
