#include "main.h"

/**
 * *_memcpy - Copying the memory area
 * @dest: the memory area
 * @src: the memory area
 * @n: the bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		*(dest + d) = *(src + d);
	}

	return (dest);
}
