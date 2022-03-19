#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: .
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%i%s", va_arg(args, unsigned int), separator);
	}
	printf("%i\n", va_arg(args, unsigned int));
	va_end(args);
}
