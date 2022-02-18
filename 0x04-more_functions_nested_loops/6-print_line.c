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
	if (max > 0)
	{
		for (i = 0; i < max; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
