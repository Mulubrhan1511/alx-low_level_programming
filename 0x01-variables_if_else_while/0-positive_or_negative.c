#include<stdio.h>
#include<time.h>
#include<stdio.h>
/**
 *main - Determines if a number is positive, negative or zero.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() -RAND_MAX / 2;
	if(n>0)
	{
		printf("%d is positaive\n", n);
	}
	else if(n<0)
	{
		 printf("%dis negative\n", n);
	}
	else
	{
		 printf("%dis zero\n", n);
	}
	return (0);
}	
       	