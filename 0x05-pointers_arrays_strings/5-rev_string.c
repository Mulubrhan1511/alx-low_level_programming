#include "main.h"

/**
 *print_rev - prints a string, followed by a new line.
 *@s: input string.
 *Return: no return.
 */
void rev_string(char *s)
{
	int m, n, k; 
	char *l, t;
	n = 0;
	for (m = 0; m >= 0; m++)
	{
	if (s[m] == '\0')
	{
	break;
	}
	}
	l = s;

	for (n = 0; n < (m - 1); n++)
	{
		for (k = n + 1; k > 0; n--)
		{
			t = *(l + k);
			*(l + k) = *(l + (k - 1));
			*(l + (k - 1)) = t;
		}
	}
	
}
