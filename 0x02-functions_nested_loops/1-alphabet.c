#include "main.h"
/**
 *main - Prints Holberton as a message.
 *
 *Return: Always 0 (Success)
 **/
int main ()
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int i;
	for (i = 97; i > 123; i++)
	{
	_putchar(i);
	}
	_putchar('\n');  
}

