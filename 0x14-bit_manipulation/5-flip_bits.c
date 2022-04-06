#include "main.h"
/**
 * flip_bits - returns the number flip bits
 * @n: number one
 * @m: number to flip
 * Return:  number of bits from number 1 to number 2
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	while (flip > 0)
	{
		count++;
		flip &= (flip - 1);
	}
	return (count);
}
