#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - A function that prints anything
 * @format: list of types of Arguments
 */
void print_all(const char * const format, ...)
{
	unsigned int j = 0;
	va_list args;
	char *e;
	char *separator = "";

	va_start(args, format);

	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				e = va_arg(args, char *);
				if (e == NULL)
					e = "(nil)";
				printf("%s%s", separator, e);
				break;
			default:
				j++;
				continue;
		}
		separator = ", ";
		j++;
	}
	printf("\n");
	va_end(args);
}
