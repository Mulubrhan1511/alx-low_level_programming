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
	for (; *(str + m) != '\0'; m--)
	{
		_putchar(*(str + m));
	}
	_putchar('\n');
}
