#include "main.h"

/**
 *print_diagonal - print 0 to 9 except 2 and 4.
 *@n: given number
 *Return: 1 if is an uppercase character, 0 in other case.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
	for (j = 1; j < i; j++)
	{
	_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
	}
}
