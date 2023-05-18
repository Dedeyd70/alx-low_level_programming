#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Allocating memory for an array
 * @nmemb: the elememts
 * @size: bytes size
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j, e;
	char *dee;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	e = nmemb * size;
	dee =  malloc(e);

	if (dee == NULL)
		return (NULL);
	while (j < e)
	{
		*(j + dee) = 0;
		j++;
	}
	return (dee);
}
