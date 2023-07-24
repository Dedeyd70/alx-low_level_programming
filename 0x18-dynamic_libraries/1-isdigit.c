#include "main.h"

/**
 * _isdigit - checking digits from 0 to 9
 * @c: checkes to be used
 * Return: 1 if c is a digit
 * others return is 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
