#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number in main
 * Return: always 0
 */

void print_diagonal(int n)
{
	int i, j, max;

	max = n;
	if (max > 0)
	{
		for (i = 0; i < max; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
