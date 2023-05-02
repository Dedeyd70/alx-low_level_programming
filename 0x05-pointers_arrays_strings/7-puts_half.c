#include "main.h"

/**
 * puts_half - Printing half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int dee = 0;
	int s, e;

	while (str[dee] != '\0')
	{
		dee++;
	}
	if (dee % 2 == 1)
	{
		s = (dee + 1) / 2;
	}
	else
	{
		s = (dee / 2);
	}
	for (e = s; e < dee; e++)
	{
		_putchar(str[e]);
	}
	_putchar('\n');

}
