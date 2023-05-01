#include <stdio.h>

/**
 *  main - Printing Fibonchi
 *  Return: always 0 (Success)
 */
int main(void)
{
	int d = 1, f = 2, dee;
	int k;

	printf("%d, %d", d, f);

	for (k = 3; k <= 50; k++)
	{
		dee = d + f;
		printf(", %d", dee);
		d = f;
		f = dee;
	}

	printf("\n");
	return (0);
}
