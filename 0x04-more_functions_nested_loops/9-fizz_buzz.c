#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing numbers 1 to 100
 * with multiples of 3, 5 and both
 *
 * Return: always 0(Success)
 */
int main(void)
{
	int u;

	for (u = 1; u <= 100; u++)
	{
		if (u % 15 == 0)
			printf("FizzBuzz");
		else if (u % 3 == 0)
			printf("Fizz");
		else if (u % 5 == 0)
			printf("Buzz");
		else
			printf("%i", u);
		if (u < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
