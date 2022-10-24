#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
<<<<<<< HEAD
	puts(str[m]);
	}
	puts('\n');
=======
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
>>>>>>> 909e7e1ead3e2fae2c23fc76dadbed5cbbac229b
}
