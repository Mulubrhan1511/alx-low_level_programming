#include "main.h"

/**
 *_strlen - size of string.
 *@s: input char.
 *Return: size of the s.
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
