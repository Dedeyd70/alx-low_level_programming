#include "main.h"

/**
 * printing lower cases times 10
 *
 * Return: 0 always (Success)
 */
void print_alphabet_x10(void)
{
	int k;
	int l;

	for (k = 0; k < 10; k++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
