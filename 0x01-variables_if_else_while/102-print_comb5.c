#include <stdio.h>

/**
 * main - Printing possible combibations of numbers
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int c, v;

	for (c = 0; c < 100; c++)
	{
		for (v = 0; v < 100; v++)
		{
			if (c < v)
			{
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				putchar(' ');
				putchar((v / 10) + 48);
				putchar((v % 10) + 48);
				{
					if (c != 98 || v != 99)
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
