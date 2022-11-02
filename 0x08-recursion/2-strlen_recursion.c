#include "main.h"

/**
 *_strlen_recursion - returns the length of a string.
 *@s: string
 *Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s != '\0')
	{
		count++;
		_strlen_recursion(s + 1);
	}
	return (count);
}
