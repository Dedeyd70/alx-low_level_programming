#include <stdio.h>
#include "main.h"

/**
 * print_array - a function printing n elements of an array of integers
 * @a: char to be used
 * @n: char is the number  of elements of the array
 */
void print_array(int *a, int n)
{
	int s = 0;

	while (s < n)
	{
		printf("%d", a[s]);
		if (s != n - 1)
		{
			printf(", ");
		}
		s++;
	}
	printf("\n");
}
