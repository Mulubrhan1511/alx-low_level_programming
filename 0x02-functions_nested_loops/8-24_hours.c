#include "main.h"
/**
 *jack_bauer - Prints time :wq!
 *
 *
 *Return: time.
 **/
void jack_bauer(void)
{
	int n, m, o, p;

	for (n = 48; n <= 50; n++)
	{
	for (m = 48; m <= 57; m++)
	{
	for (o = 48; o <= 53; o++)
	{
	for (p = 48; p <= 57; p++) 
	{
	if (n >= 50 && m >= 52)
	break;
	_putchar(n);
	_putchar(m);
	_putchar(58);
	_putchar(o);
	_putchar(p);
	_putchar('\n');
	}
	}
	}
	}
}

