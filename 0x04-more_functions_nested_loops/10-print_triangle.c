#include "main.h"

/**
 *print_triangle - multiplies two integers.
 *@size: size of triangle.
 *Return: multiplication
 */
void print_triangle(int size)
{
	int i, j;
	for (i = 1; i <= size; i++)
	{
	for (j = 1; j < (size - i); j++)
	_putchar(' ');
	for (j--; j < size; j++)
	_putchar(35);
	if (i < (size - 1))
	_putchar('\n');
	}
	_putchar('\n');
}
