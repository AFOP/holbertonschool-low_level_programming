#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value
 * in a sorted array of integers using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));

		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return mid;
	}

	if (value == array[low])
		return low;
	else
	{
		printf("Value checked array[%d] is out of range\n", high);
		return -1;
	}
}
