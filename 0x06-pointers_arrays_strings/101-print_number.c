#include "main.h"

/**
 * print_number - Printing an integer
 * @n: char to be used
 * Return: always 0(Success)
 */
void print_number(int n)
{
	unsigned int d = n;

	if (n < 0)
	{
		_putchar('-');
		d = -d;
	}
	if ((d / 10) > 0)
		print_number(d / 10);
	_putchar((d % 10) + '0');
}
