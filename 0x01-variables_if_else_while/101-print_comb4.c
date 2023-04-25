#include <stdio.h>

/**
 * main - printing combination of numbers
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int e, f, g;

	for (e = 48; e <= 57; e++)
	{
		for (f = 49; f <= 57; f++)
		{
			for (g = 50; g <= 57; g++)
			{
				if (g > f && f > e)
				{
					putchar(e);
					putchar(f);
					putchar(g);
					if ((e != 55) || (f != 56) || (g != 57))
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
