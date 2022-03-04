#include "main.h"

/**
 * mynameis - prints its name, followed by a new line
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: nothing
 */
int mynameis(int argc, char *argv[])
{
	if (argc > 1)
	{	
		_putchar (*argv[0]);
	}
	return(0);
}
