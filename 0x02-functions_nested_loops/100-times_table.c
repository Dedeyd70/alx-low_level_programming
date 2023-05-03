#include "main.h"

/**
 * print_times_table - Printing the times table stating with 0
 * @n: char to be used
 * Return: if n is greater than 15 or less than 0 print nothing
 */
void print_times_table(int n)
{
	int d, f, pro;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (d = 0; d <= n; d++)
	{
		for (f = n; f <= n; f++)
		{
			pro = d * f;
			if (pro <= 9)
			{
				_putchar(pro = '0');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if (pro <= 99)
			{
				_putchar((pro / 10) + '0');
				_putchar((pro % 10) + '0');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((pro / 100) + '0');
				_putchar(((pro / 10) % 10) + '0');
				_putchar((pro % 10) + '0');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
