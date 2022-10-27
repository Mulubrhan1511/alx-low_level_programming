#include "main.h"

/**
 *_strcat - concatenates two strings,
 *@dest: destination.
 *@src: source.
 *Return: the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[j] = '\0';
	}
	return (dest);
}
