#include "main.h"
#include <stdlib.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: the number
 * @index: is the index starting from 0
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int s = sizeof(unsigned long int) * 8;

	if (index >= s)
		return (-1);
	n = n >> index;
	return (n & 1);
}
