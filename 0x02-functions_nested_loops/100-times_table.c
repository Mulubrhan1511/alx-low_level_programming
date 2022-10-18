#include "main.h"
/**
 *print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *Return: no retun
 */
void print_times_table(int n)
{
	int m, h;
	if (n <= 15 && n >= 0)
	{
	for (m = 0; m <= n; m++)
	{
	for (h = 0; h <= n; h++)
	{
	int prod = m * h;
	if (h == 0)
	{
	_putchar('0');
	}
	else if (prod <= 9)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + prod);
	}
	else if (prod > 99)
	{
	_putchar(',');
	_putchar(' ');
	_putchar('0' + (prod / 100));
	_putchar('0' + ((prod / 10) % 10));
	_putchar('0' + (prod % 10));
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + (prod / 10));
	_putchar('0' + (prod % 10));
	}
	}
	}
	_putchar('\n');
	}
}
