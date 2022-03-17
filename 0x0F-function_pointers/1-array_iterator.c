#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: pointer of array
 * @size:  is the size of the array
 * @action: is a pointer to the function you need to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && size != 0)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
