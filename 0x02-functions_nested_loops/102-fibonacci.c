#include <stdio.h>

/**
 *  main - Printing Fiboncci starting from 1 and 2
 *  Return: always 0 (Success)
 */
int main(void)
{
	long int d = 1, f = 2, dee;
	int k;

	printf("%ld, %ld",d, f);

	for (k = 3; k <= 50; k++)
	{
		dee = d + f;
		printf(", %ld", dee);
		d = f;
		f = dee;
	}

	printf("\n");
	return (0);
}
