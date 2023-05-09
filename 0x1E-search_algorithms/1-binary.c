#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - Searches for a value in a sorted array of integers using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, or -1 if not found.
 */

int binary_search(int *array, size_t size, int value)
{
    int left = 0;
    int right = size - 1;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        int mid = (left + right) / 2;

        printf("Searching in array: ");
        for (int i = left; i <= right; i++)
            printf("%d%s", array[i], i == right ? "\n" : ", ");

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}