#include "main.h"
/**
 * binary_to_uint - converts a binary number
 * @b: pointer of string with the number binary
 * Return: number decimal or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dnumber = 0, base;
	int lg = 0;
	
	if (!b)
		return (0);
	
	for (lg = 0; b[lg] != '\0'; lg++)
		;

	for (lg--, base = 1; lg >= 0; lg--, base *= 2)
	{
		if (b[lg] != '0' && b[lg] != '1')
		{
			return (0);
		}
		if (b[lg] != '\0' && b[lg] == '1')
		{
			dnumber += base;
		}
	}
	return (dnumber);
}
