#include <stdio.h>

/**
 * main - Multiplication of natural numbers
 * Return: always 0 (Success)
 */
int main(void)
{
	int dee = 0;
	int f;

	for (f = 1; f < 1024; f++)
	{
		if (f % 3 == 0 || f % 5 == 0)
		{
			dee += f;
		}
	}
	printf("%d\n", dee);
	return (0);
}
