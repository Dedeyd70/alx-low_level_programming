#include "main.h"

/**
 * factorial - Returning the factoraial of a number.
 * @n: num to be used.
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
