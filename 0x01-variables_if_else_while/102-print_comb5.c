#include<stdio.h>
/**
 *main - Prints numbers between 00 to 99.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
	for (j = 48; j < 58; j++)
	{
	for (k = 48; k < 58; k++)
	{
	for (l = 49; l < 58; l++)
	{
	putchar(i);
	putchar(j);
	putchar(' ');
	putchar(k);
	putchar(l);
	if (i == 57 && j == 57 && k == 57 && l == 57)
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
	}
	}
	putchar('\n');
	return (0);
}
