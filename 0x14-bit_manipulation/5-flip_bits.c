#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - A function that returns the num of bits to flip
 * @n: the first number
 * @m: the second number
 * Return: the number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int amt = 0;
	unsigned long int flip = n ^ m;

	for (; flip != 0; flip >>= 1)
	{
		amt += flip & 1;
	}
	return (amt);
}
