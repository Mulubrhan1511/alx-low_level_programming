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
	int m = 0;
	int n = 1;
	
	for (i = 48; i <= 57; i++)
	{
	for (j = n; j <= 9 ; j++)
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
	n++;	
	}
	putchar('\n');
	return (0);
}

