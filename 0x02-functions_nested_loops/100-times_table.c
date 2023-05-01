#include "main.h"

/**
 * print_times_table - Printing the times table
 * @n: argument to be used
 * Return: should print nothing if n is less than 0 or greater than 15
 */
void print_times_table(int n)
{
	int d, f, jay;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (d = 0; d <= n; d++)
	{
		for (f = 0; f <= n; f++)
		{
			jay = d * f;

			if (jay < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(jay + '0');
			}
			else if (jay < 100)
			{
				_putchar(' ');
				_putchar(jay / 10 + '0');
				_putchar(jay % 10 + '0');
			}
			else
			{
				_putchar(jay / 100 + '0');
				_putchar((jay % 10) % 10 + '0');
				_putchar(jay % 10 + '0');
			}
			if (f < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
