#include <stdio.h>

/**
 * main - Printing single digits of base 10
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int p;

	for (p = 0; p < 10; p++)
	{
		putchar((p % 10) + '0');
	}
	putchar('\n');
	return (0);
}
