#include <stdio.h>
/**
 *main - Prints the add of the Fibonacci numbers
 *
 *Return: Always 0.
 */
int main(void)
{
	int n;
	long int l, m, fib;
	
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
