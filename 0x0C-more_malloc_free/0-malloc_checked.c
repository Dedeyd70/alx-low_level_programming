#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Allocating memory using malloc
 * @b: argument to be used
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	int *d;

	d = malloc(b);

	if (d == NULL)
	{
		exit(98);
	}
	return (d);
}
