#include <stdio.h>
/**
 *main - Prints numbers between 00 to 99.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	
	for (i = 48; i < 58; i++)
	{
	for (j = (i + 1); j < 58; j++)
	{
	putchar(i);
	putchar(j);
	if (i == 58 && j == 58)
	{
	break;
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

