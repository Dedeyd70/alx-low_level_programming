#include <stdio.h>

/**
 * main - The numbers in base 16
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	char b;
	char h;

	for (b = 48; b <= 57;  b++)
	{
		putchar(b);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
