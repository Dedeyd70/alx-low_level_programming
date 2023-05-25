#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Printing strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *dee;
	unsigned int d;

	va_start(list, n);

	for (d = 0; d < n; d++)
	{
		dee = va_arg(list, char *);
		if (dee == 0)
			printf("(nil)");
		else
			printf("%s", dee);
		if (d != (n - 1) && separator != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
