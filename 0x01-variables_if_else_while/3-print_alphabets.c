#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the function find the positive, negativo o zero of n
 * Return: 0
 */
int main(void)
{
	char min;
	char may;

	for (min = 'a'; min <= 'z'; min++)
	{
		putchar(min);
	}
	for (may = 'A'; may <= 'Z'; may++)
        {
                putchar(may);
        }
	putchar('\n');
	return (0);
}

