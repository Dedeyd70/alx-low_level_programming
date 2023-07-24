#include "main.h"

/**
 * *_strncpy - cpoying of a string
 * @dest: string to be used
 * @src: string  to be used
 * @n: char to be used
 * Return: dest
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
		dest[i] = '\0';
	}
	return (dest);
}
