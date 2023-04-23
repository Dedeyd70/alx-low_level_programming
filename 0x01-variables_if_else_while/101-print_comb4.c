#include <stdio.h>

/**
 * main - Combination of 3 digits
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int e, f, g;

	for (e = 48; e < 58; e++)
	{
		for (f = 49; f < 58; f++)
		{
			for (g = 50; g < 58; g++)
			{
				if (g > f && g > e)
				{

				putchar(e);
				putchar(f);
				putchar(g);
				{
					if (e != 56 || f != 57)
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
