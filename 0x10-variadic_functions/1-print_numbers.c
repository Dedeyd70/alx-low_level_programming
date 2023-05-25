#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Printing numbers
 * @separator: The string to be printed between numbers
 * @n: The number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int d;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
	{
		separator = "";
	}


	d = 0;

	while (d < n)
	{
		printf("%d", va_arg(list, int));
		if (d != n - 1)
		{
			printf("%s", separator);
		}
		d++;
	}
	printf("\n");
	va_end(list);
}
