#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the function find the positive, negativo o zero of n
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

