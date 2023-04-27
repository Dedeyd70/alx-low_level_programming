#include "main.h"

/**
 * print_line - drwaing straight line in the terminal
 * @n: the character to be used
 * Return: always 0(Success)
 */
void print_line(int n)
{
	int f;

	for (f = 0; f < n; f++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
