#include "main.h"

/**
 * is_divisible - Finding the prime number
 * @n: the num
 * @divisor: the divisor
 * Return: 1 if prime number or 0 if not.
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	if (n % divisor == 0)
	{
		return (1);
	}
	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - Finding the prime number
 * @n: num to check
 * Return: 1 if prime number or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (!is_divisible(n, n - 1));
}
