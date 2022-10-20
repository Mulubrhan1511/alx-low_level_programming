#include "main.h"

/**
 *print_most_numbers print 0 to 9 except 2 and 4
 *(neither 2 nor 4).
 *Return: 1 if is an uppercase character, 0 in other case.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
	if (i != 50 && i != 52)
	_putchar(i);
	}
	_putchar('\n');
}

