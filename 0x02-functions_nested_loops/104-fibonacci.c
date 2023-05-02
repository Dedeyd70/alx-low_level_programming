#include <stdio.h>
#include <stdint.h>

/**
 * main - Printing the first 98 fibonacci numbers
 * Return: always 0 (success)
 */
int main(void)
{
	uint32_t d = 1, f = 2, dee;
	int e;

	printf("%u, %u", d, f);

	for (e = 3; e < 98; e++)
	{
		dee = d + f;
		printf(", %u", dee);
		d = f;
		f = dee;
	}


	printf("%u\n", d + f);

	return (0);
}
