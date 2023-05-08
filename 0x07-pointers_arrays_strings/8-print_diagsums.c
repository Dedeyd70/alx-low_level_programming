#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Printing the sums of two diagonal
 * @a: the matrix
 * @size: the size
 */
void print_diagsums(int *a, int size)
{
	int dee = 0;
	int jay = 0;
	int d;

	for (d = 0; d < size; d++)
	{
		dee += a[d * size + d];
	}
	for (d = 0; d < size; d++)
	{
		jay += a[d * size + (size - 1 - d)];
	}
	printf("%d, %d\n", dee, jay);
}
