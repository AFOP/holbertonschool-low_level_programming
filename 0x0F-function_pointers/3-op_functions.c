#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function that return +.
 * @a: the value one
 * @b: the value two
 * Return: result of the add.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that return -.
 * @a: the value one
 * @b: the value two
 * Return: result of the -.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that return the multiplication.
 * @a: the value one
 * @b: the value two
 * Return: result of the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that return division.
 * @a: the value one
 * @b: the value two
 * Return: result of the division.
 */
int op_div(int a, int b)
{
	if (b == 0) 
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that return remainder of the division of a by b.
 * @a: the value one
 * @b: the value two
 * Return: result of the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
