#include "main.h"
/**
 *jack_bauer - Prints the minutes of a day
 *
 *Return: no return
 */
void times_table(void)
{
	int n, m;
	for (n = 0; n < 10; n++)
	{
	for (m = 0; m < 10; m++)
	{
	int prod = j * i;
	if (j == 0)
	{
	_putchar('0');
	}
	else if (prod <= 9)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(prod + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar(prod / 10 + '0');
	_putchar(prod % 10 + '0');
	}
	}
	_putchar('\n');
	}
}
