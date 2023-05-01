#include <stdio.h>

/**
 * main - Printing the first 98 fibonacci numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int d = 1, f = 2;

	printf("%d, %d", d, f);

	for (int e = 3; e <= 98; e++)
	{
		int dee = d + f;
		printf(",%d", dee);
		if (e !=98)
		{
			printf(",");
		}
		d = f;
		f = dee;
	}
	printf("\n");
	return (0);
}
