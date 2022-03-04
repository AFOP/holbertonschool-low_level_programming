#include "main.h"

/**
 * prime_check - check if is prime or not
 * @x: number to check
 * @y: count
 * Return: 1 if is prime o 0 if not prime
 */
int prime_check(int x, int y)
{
	if (x < 2)
	{
		return (0);
	}
	if (y >= x)
	{
		return (1);
	}
	if ((x % y) == 0)
	{
		return (0);
	}
	return (prime_check(x, y + 1));
}
/**
 * is_prime_number -  input integer is a prime number, otherwise return 0.
 * @n: number to calculate the sqrt
 * Return: sqrt n
 */
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
