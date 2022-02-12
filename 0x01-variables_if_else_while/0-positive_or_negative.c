#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
   * main - positive or negative
   * Comments in C source code.
   * Please use it consistently.
   *
   * Description: A column of asterisks on the left side,
   * With beginning and ending almost-blank lines.
   *
   */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		 printf("%d is negative\n", n);
	}
	return (0);
}

