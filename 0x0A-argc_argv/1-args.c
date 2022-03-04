#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
