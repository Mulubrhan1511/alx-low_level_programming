#include "main.h"

/**
 *print_rev - prints a string, followed by a new line.
 *@s: input string.
 *Return: no return.
 */
void rev_string(char *s)
{
	int m, n;
	char *l;
	n = 0;
	for (m = 0; m >= 0; m++)
	{
	if (s[m] == '\0')
	{
	break;
	}
	}
	for (m--; m >= 0; m--)
	{
	l[n] = s[m];
	n++;	
	}
	s = l;
	
}
