#include "main.h"

/**
 * print_chessboard - Printing the chessboard.
 * @a: char to be used
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int d, j;

	for (d = 0; d < 8; d++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[d][j]);
		}
		_putchar('\n');
	}
}
