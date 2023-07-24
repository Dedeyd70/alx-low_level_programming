#include "main.h"

/**
 * _puts - Printing a string
 * @str: argument to be used
 * Return: string and a new line
 */
void _puts(char *str)
{
	int dee = 0;

	while (str[dee] != '\0')
	{
		_putchar(str[dee]);
		dee++;
	}
	_putchar('\n');
}
