#include <stdio.h>

/**
 * main - Printing the first 98 fibonacci numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int e, d = 1, f = 2, dee;

	printf("%d, %d", d, f);

	for (e = 3; e <= 98; e++)
	{
		dee = d + f;
		printf("%d, ", dee);
		d = f;
		f = dee;
	}


	printf("\n");
	return (0);
}
