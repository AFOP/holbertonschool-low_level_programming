#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* postive_or_negative - function prints positive or negative 
* Return: 0
*/ 
void positive_or_negative(int i)
{
/* your code goes there */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
