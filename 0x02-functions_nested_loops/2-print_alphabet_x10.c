#include "main.h"

/**
 * print_alphabet_x10 - Printing lower cases times 10
 *
 * Return: 0 always (Success)
 */
void print_alphabet_x10(void)
{
	char k;
	char l;

	for (k = 0; k < 10; k++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
