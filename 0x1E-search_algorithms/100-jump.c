#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index of the value if found, or -1 if not found.
 */

int jump_search(int *array, size_t size, int value)
{
    int left = 0;
    int right = sqrt(size);
    int step = sqrt(size);
    int i;

    if (array == NULL)
        return (-1);

    while (right < (int)size && array[right] < value)
    {
        printf("Value checked array[%d] = [%d]\n", right, array[right]);
        left = right;
        right += step;
    }

    printf("Value found between indexes [%d] and [%d]\n", left, right);

    for (i = left; i <= right && i < (int)size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}