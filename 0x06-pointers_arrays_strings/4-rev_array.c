#include "main.h"

/**
 *reverse_array - reverses the content of an array of integers.
 *@a: array.
 *@n: number of elements of the array.
 *Return: no return.
 */
void reverse_array(int *a, int n)
{
	int i, j, *b;

	j = 0;
	for (i = n - 1; i >= 0; i--)
	{
	b[j] = a [i];
	j++;	
	}
	a = b; 
}
