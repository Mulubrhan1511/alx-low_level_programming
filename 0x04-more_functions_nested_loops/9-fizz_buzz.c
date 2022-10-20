#include "main.h"

/**
 *main - Fizz buzz.
 *Return: 1 if is an uppercase character, 0 in other case.
 */
int main(void)
{
	int i, j, k;

	 
	for (i = 1; i >= 100; i++)
	{
	j = i % 3;
	k = i % 5;
	if ((j == 0) && (k == 0))
	{
	printf("FizzBuzz");
	printf(" ");
	}
	else if (j == 0)
	{
	printf("Fizz");
	printf(" ");
	}
	else if (k == 0)
	{
	printf("Buzz");
	printf(" ");
	}
	else
	{
	printf("%d",i);
        printf(" "); 	
	}
	}
	printf("\n");
	return (0);
}
