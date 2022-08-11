#include "search_algos.h"
#include <math.h>

/**
 * min - function that return min value
 * @a: value one
 * @b: value two
 * Return: return min value
 */
int min(int a, int b){
    if(b>a)
        return a;
    return b;
}
/**
 * iqual - function that return idex of iqual
 * @array: is a pointer to the first element of the array to search in
 * @prev: is the first range of array
 * @step: is the last range of array
 * @value: is the value to search
 * Return: return index of array
 */
int iqual(int *array, int prev, int step, int value, int hight)
{
    int r = sqrt(hight);
    int indx = (prev - r);
    int prev2 = (prev - r);

    if (prev2 == prev)
    {
        prev2 = 0;
        indx = 0;
    }
    if (prev > hight)
    {
        indx = prev - sqrt(hight);
        prev2 = indx;
    }
    if (value == 0)
    {
        prev2 = 0;
        prev = step;
        indx = prev2;
    }
    printf("Value found between indexes [%d] and [%d]\n", prev2, prev);
    while (indx < hight + 1)
    {
        printf("Value checked array[%d] = [%d]\n", indx, array[indx]);
        if (array[indx] == value)
        {
            return (indx);
        }
        indx++;
    }
    return (-1);
}
/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: the index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
    int index = 0, prev = 0, hight = size - 1;
    int step = sqrt(hight);

    if (size <= 0)
        return (-1);
    if (array)
    {
        while (array[min(prev, hight)] < value)
        {
            printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
            prev = step;
            step += sqrt(size);
            if (prev > hight)
                break;
        }   
        index = iqual(array, prev, step, value, hight);
        return (index);
    }
    return (-1);
}
