#include "main.h"

/**
 * print_alphabet - Printing _putchar
 * Description: printing alphabets in lower case
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
