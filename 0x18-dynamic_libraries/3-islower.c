#include "main.h"

/**
 * _islower - printing lower case character
 * @c: the argument used
 * Return: 1 if c is lower case
 * otherwise return is 0
 *
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
