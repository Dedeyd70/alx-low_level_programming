#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - summing all parameters
 * @n: number to be used
 * Return: always 0(success)
 */
int sum_them_all(const unsigned int n, ...)
{
	int res;
	unsigned int d;
	va_list list;

	res = 0;
	va_start(list, n);

	if (n == 0)
		return (0);

	d = 0;

	while (d < n)
	{
		res += va_arg(list, int);
		d++;
	}
	va_end(list);
	return (res);
}
