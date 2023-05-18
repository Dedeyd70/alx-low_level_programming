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
	unsigned int j;
	char *dee;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	dee = malloc(nmemb * size);

	if (dee == NULL)
		return (NULL);
	j = 0;
	while (j < nmemb * size)
	{
		*(j + dee) = 0;
		j++;
	}
	return (dee);
}
