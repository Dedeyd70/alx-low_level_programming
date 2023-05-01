#include <stdio.h>

/**
 * main - Printing the first 98 fibonacci numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int d = 1, f = 2, c, dee;

	printf("%d, %d, ", d, f);

	while (dee < 98)
	{
		c = d + f;
		printf("%d, ", c);
		d = f;
		f = c;
		dee++;
	}

	c = d + f;
	printf("%d\n", c);
	return (0);
}
