#include <stdio.h>
/**
 * binary_search - Searches for a value in a sorted array of integers using
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: value is the value to search for
 * Return: -1 If value is not present in array or if array is NULL, otherwise
 */
int binary_search(int *array, size_t size, int value)
{
size_t left = 0;
size_t i;
size_t right;
int mid;
right = size - 1;
left = 0;
if (array == NULL)
{
return (-1);
}
while (left <= right)
{
printf("Searching in array: ");
for (i = left; i <= right; i++)
{
printf("%d ", array[i]);
}
printf("\n");
mid = left + (right - left) / 2;
if (array[mid] == value)
{
return (mid);
}
else if (array[mid] < value)
{
left = mid + 1;
}
else
{
right = mid - 1;
}
}
return (-1);
}
