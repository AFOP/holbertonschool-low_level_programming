#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: is a variable type integer with value 98
 * @b: is a variable type integer with value 42
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
