#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int m;
	
	for (m = 0; *(str + m) != '\0'; m++)
	{
	_putchar(*(str + m));
	}
	_putchar('\n');
}
