#include "main.h"
#include <limits.h>

/**
 * _atoi - Converting a string to an integer
 * @s: string to convert
 * Return: the value of the string
 */
int _atoi(char *s)
{
	unsigned int d = 0;
	int j = 1;

	do {
		if (*s == '-')
			j *= -1;
		else if (*s >= 48 && *s <= 57)
			d = (d * 10) + (*s - 48);
		else if (d > 0)
			break;
	} while (*s++);
	return (d * j);
}

