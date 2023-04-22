#include <stdio.h>

/**
 * main - Combinations of single digit numbers
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int y;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
		if (y != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
