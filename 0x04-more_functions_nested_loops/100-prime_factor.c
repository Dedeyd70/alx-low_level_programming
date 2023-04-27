#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main - Printing the prime factors
 * Return: always 0(Success)
 */
int main(void)
{
	unsigned long int d, n = 612852475143;

	for (d = 3; d <= sqrt(n); d = d + 2)
	{
		while ((n % d == 0) && (n != d))
			n = n / d;
	}
	printf("%lu\n", n);
	return (0);
}
