#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index of the number
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 0;

	if (index < 64)
	{
		for (; x <= index; x++)
		{
			if (x == index)
			return ((n & 1));
			n >>= 1;
		}
	}
	return (-1);
}
