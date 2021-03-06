#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: pointer with the string
 * return: zero in the condition null in the pointer in conteiner
 */
void _print_rev_recursion(char *s)
{
	if (!s || !*s)
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
