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
	int m;

	for (i = 48; i <= 57; i++)
	{
	for (j = 49; j <= 57 ; j++)
	{
	putchar(i);
	putchar(j);
	if (m < 45)
	{
	putchar(',');
	putchar(' ');
	}

	m++;
	}
	putchar(',');                                                         
	putchar(' '); 
	}
	putchar('\n');
	return (0);
}

