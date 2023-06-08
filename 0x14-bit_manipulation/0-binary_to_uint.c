#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converting a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted unsigned int value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int outcome = 0;
	int d = 0;

	if (b == NULL)
		return (0);
	while (b[d] != '\0')
	{
		if (b[d] != '0' && b[d] != '1')
			return (0);
		outcome = (outcome * 2) + (b[d] - '0');
		d++;
	}
	return (outcome);
}
