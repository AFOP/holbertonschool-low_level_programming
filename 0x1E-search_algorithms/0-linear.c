#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    while (array && i < size)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);

        if (array[i] == value)
        {
            return (i);
        }
        i++;
    }
    return -1;
}
