#include "main.h"

/**
 * print_last_digit - Printing the last digits of a number
 * @k: the argument to be used
 * Return: value of the last digit
 */
int print_last_digit(int k)
{
	int a;
	if (k < 0)
		k = -k;

	a = k % 10;
	if (a < 0)
		a = -a;
	_putchar(a+ '0');
		return (k);
}
