#include "main.h"
#include <stdlib.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: is the index starting from 0
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
