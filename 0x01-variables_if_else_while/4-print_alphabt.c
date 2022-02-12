#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the function find the positive, negativo o zero of n
 * Return: 0
 */
int main(void)
{
	char az;
		
	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
	}
	putchar('\n');
	return (0);
}

