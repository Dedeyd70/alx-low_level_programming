#include "main.h"

/**
 * print_rev - Printing a string in reverse
 * @s: char to be used for printing in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int dee = 0;

	while (s[dee])
		dee++;
	while (dee--)

	_putchar(s[dee]);

	_putchar('\n');
}
