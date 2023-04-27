#include "main.h"

/**
 * print_number - printing integers
 * @n: the character to be used
 * Return: always 0(Success)
 */
void print_number(int n)
{
	unsigned int r = n;

	if (n < 0)
	{
		_putchar('-');
		r = -r;
	}
	if (r / 10)
	{
		print_number(r / 10);
	}
	_putchar(r % 10 + '0');
}
