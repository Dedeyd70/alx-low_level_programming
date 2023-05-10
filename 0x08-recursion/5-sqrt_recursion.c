#include "main.h"

/**
 * calculate_sqrt - Finding the sqrt
 * @n: number to be used
 * @i: num to be used
 * Return: natural sqrt root, or -1 if not natural root
 */
int calculate_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (calculate_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Finding natural sqrt of n
 * @n: n
 * Return: natural sqrt root, or -1 if not natural root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (calculate_sqrt(n, 0));
}
