#include "main.h"

/**
 * puts2 - Printing every other char of a string
 * @str: the string to be used
 * Return: always 0(Success)
 */
void puts2(char *str)
{
	int d = 0;

	while (str[d] != '\0')
	{
		if (d % 2 == 0)
		{
			_putchar(str[d]);
		}
		d++;
	}
	_putchar('\n');
}
