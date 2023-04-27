#include "main.h"

/**
 * print_triangle - printing triangles
 * @size: size of a triangle
 * Return: void
 */
void print_triangle(int size)
{
	int z, d, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (z = 1; z <= size; z++)
		{
			for (c = size - z; c >= 1; c--)
			{
				_putchar(' ');
			}
			for (d = 1; d <= z; d++)
			{
				_putchar ('#');
			}
			_putchar('\n');
		}
	}
}
