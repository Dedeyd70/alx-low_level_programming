#include "main.h"

/**
 * print_sign - Printing the sign of a number
 * @n: the argument used
 * Return: 1 and print + if n is greater than zero
 * otherwise return is 0 if n is zero
 * and return is -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
