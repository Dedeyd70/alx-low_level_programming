#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Printing a buffer
 * @b: is the buffer to print
 * @size: the size
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int a, u, c;

	a = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		u = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (c = 0; c < 10; c++)
		{
			if (c < u)
				printf("%02x", *(b + a + c));
			else
				printf(" ");
			if (c % 2)
			{
				printf(" ");
			}
		}
		for (c = 0; c < u; c++)
		{
			int d = *(b + a + c);
				if (d < 32 || c > 132)
				{
					d = '.';
				}
			printf("%c", d);
		}
		printf("\n");
		a += 10;
	}
}
