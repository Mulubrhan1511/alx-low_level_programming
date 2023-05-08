#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - Searches for a value in an array of integers.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 if the value not present
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
return (-1);
for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
