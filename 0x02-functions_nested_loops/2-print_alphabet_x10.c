#include "main.h"
/**
 *
 *  * print_alphabet_x10 - Prints the alphabet in lowercase.
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     */
void print_alphabet_x10(void)
{
	int i, j;
	for (i = 1; i <= 10; i++)
	{
	for (j = 97; j <= 122; j++)
	{
	_putchar(i);
	}
	_putchar('\n');
}

