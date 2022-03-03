#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: is a valor
 * @y: is a integer raised to the power
 * Return: the value of x
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
