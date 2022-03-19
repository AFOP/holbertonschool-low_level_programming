#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *cp;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		cp = va_arg(args, char *);

		if (cp)
			printf("%s%s", cp, separator);
		else
			printf("(nil)%s", separator);
	}
	cp = va_arg(args, char *);
	if (cp)
		printf("%s\n", cp);
	else
		printf("(nil)\n");
	
	va_end(args);
}
