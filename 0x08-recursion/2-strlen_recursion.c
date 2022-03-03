#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer with the string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (!s || !*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
