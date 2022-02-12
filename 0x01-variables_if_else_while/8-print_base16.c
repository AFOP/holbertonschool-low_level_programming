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
	char chalfb;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (chalfb = 'a'; chalfb <= 'f'; chalfb++)
        {
                putchar(chalfb);
        }
	putchar('\n');
	return (0);
}

