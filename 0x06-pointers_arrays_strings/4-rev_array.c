#include "main.h"

/**
 * reverse_array - Reversing the contents of an array
 * @a: array to be used
 * @n: is the number of  elements of the array
 */
void reverse_array(int *a, int n)
{
	int d = 0;
	int f = n - 1;
	int dee;

	while (d < f)
	{
		dee = a[d];
		a[d] = a[f];
		a[f] = dee;
		d++;
		f--;
	}
}
