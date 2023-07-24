#include "main.h"

/**
 * *_memset - Filling a memory with a constant byte
 * @s: char to be used
 * @b: cahr to used
 * @n: bytes of the memory
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		*(s + d) = b;
	}

	return (s);
}
