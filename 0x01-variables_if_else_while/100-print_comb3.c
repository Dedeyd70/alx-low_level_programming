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
			if (u > r)
			{
				putchar(r);
				putchar(u);
				{
					if ((r != 56) || (u != 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
