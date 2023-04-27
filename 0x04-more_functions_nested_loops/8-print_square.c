#include "main.h"

/**
 *  print_square - printing squares
 *  @size: size of the square
 *  Return: void
 */
void print_square(int size)
{
	int t, y;

	if (size <= 0)
		_putchar('\n');
	for (t = 0; t < size; t++)
	{
		for (y = 0; y < (size); y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
