#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creating an array
 * @size: the value
 * @c: the char to be used
 * Return:0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int d;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL || size == 0)
	{
		return (NULL);
	}
	for (d = 0; d < size; d++)
	{
		arr[d] = c;
	}
	return (arr);
}
