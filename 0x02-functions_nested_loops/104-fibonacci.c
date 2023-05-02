#include <stdio.h>

/**
 * main - Printing the first 98 fibonacci numbers
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned int d = 1, f = 2, dee;
	int e;

	printf("%d, %d", d, f);

	for (e = 3; e <= 97; e++)
	{
		dee = d + f;
		printf(", %u", dee);
		d = f;
		f = dee;
	}


	printf("\n");

	return (0);
}
