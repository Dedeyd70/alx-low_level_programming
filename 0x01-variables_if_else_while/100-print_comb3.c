#include <stdio.h>

/**
 * main - Printing different combinations
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int r, u;

	for (r = 48; r <= 57; r++)
	{
		for (u = 49; u <= 57; u++)
		{
			if (r != u && u > r)
			{
			putchar(r);
			putchar(u);
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
