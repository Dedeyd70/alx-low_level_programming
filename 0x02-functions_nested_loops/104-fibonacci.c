#include <stdio.h>
#include <stdint.h>

/**
 * main - Printing the first 98 fibonacci numbers
 * Return: always 0 (success)
 */
int main(void)
{
	uint64_t d = 1, f = 2, dee;
	int e;

	printf("%lu, %lu", d, f);

	for (e = 0; e < 96; e++)
	{
		dee = d + f;
		printf(", %lu", dee);
		d = f;
		f = dee;
	}


	printf("%lu\n", d + f);

	return (0);
}
