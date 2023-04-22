#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: the single digits numbers of base 10
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int t;

	for (t = 0; t <= 9; t++)
	{
		printf("%d", t);
	}
	printf("\n");
	return (0);
}
