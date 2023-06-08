#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - A function that checks the endianness
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian = (char *)&num;

	return (*endian == 1);
}
