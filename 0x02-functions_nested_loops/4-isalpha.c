#include "main.h"

/**
 * _isalpha - Printing alphabetic character
 * @c:the argument used
 * Return: 1 if c is a letter, lowercase or uppercase
 * otherwise return is 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
