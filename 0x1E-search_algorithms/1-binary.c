#include "search_algos.h"

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int x = 0, low = 0, hight = size - 1;

	if (size == 1)
		hight = size;
	if (array)
	{
		while (low <= hight)
		{
			int mid = (low + hight) / 2;

			printf("Searching in array: ");
			x = low;
			while (x <= hight + 1)
			{
				printf("%d", array[x]);
				if (x == hight)
				{
					break;
				}
				printf(", ");
				x++;
			}
			printf("\n");
			if (array[mid] < value)
				low = mid + 1;
			else if (array[mid] > value)
				hight = mid - 1;
			else
			{
				if (array[mid] != value)
					return (-1);
				return (mid);
			}
		}
	}
	return (-1);
}
