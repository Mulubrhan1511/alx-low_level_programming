#include "main.h"

/**
 *_puts - prints a string, followed by a new line.
 *@str: input string.
 *Return: no return.
 */
void print_rev(char *s)
{
	int m;

	m = sizeof(s);
	_putchar('!');
	for (; *(s + m) != '\0'; m--)
	{
		_putchar(*(s + m));
	}
	_putchar('\n');
}
