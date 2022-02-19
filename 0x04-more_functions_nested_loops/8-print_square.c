#include "main.h"
/**
 *  print_square - print a square
 * @size: number the return
 * Return: always 0
 */

void print_square(int size)
{
	int i, j, max;

	max = size;
	if (max > 0)
	{
		for (i = 0; i < max; i++)
		{
			for (j = 0; j < max; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
