#include <stdio.h>
/**
 *main - Prints the addtion of the Fibonacci numbers
 *
 *Return: Always 0.
 */
int main(void)
{
	long int l, m, fib, n;
	
	l = 1;
	m = 2;
	printf("%ld, %ld", l, m);
	for (n = 0; n < 48; n++)
	{
	fib = m + l;
	printf(", %ld", fib);
	l = m;
	m = fib;
	}
	printf("\n");
	return (0);
}
