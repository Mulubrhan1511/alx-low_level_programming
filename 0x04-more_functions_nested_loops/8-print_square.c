#include "main.h"

/**
 *print_square - print 0 to 9 except 2 and 4.
 *@size: size of the square
 *Return: 1 if is an uppercase character, 0 in other case.
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size; j++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	_putchar('\n');
}