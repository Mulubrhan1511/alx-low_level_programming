#include <stdio.h>"

/**
 *main - Fizz buzz.
 *Return: 1 if is an uppercase character, 0 in other case.
 */
int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
	if ((m % 3 == 0) && (m % 5 == 0))
	{
	printf(" FizzBuzz");
	}
	else if (m % 3 == 0)
	{
	printf(" Fizz");
	}
	else if (m % 5 == 0)
	{
	printf(" Buzz");
	}
	else
	{
	printf(" %d", m);
	}
	}
	printf("\n");
	return (0);
}
