#include <stdio.h>

/**
 * main - Printing the first 98 fibonacci numbers
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long int lui;
	unsigned long int f = 1000000000;
	unsigned long int fb = 1;
	unsigned long int fbn = 2;
	unsigned long int fb1;
	unsigned long int fb2;
	unsigned long int fbn1;
	unsigned long int fbn2;

	printf("%lu", fb);

	for (lui = 1; lui < 91; lui++)
	{
		printf(", %lu", fbn);
		fbn += fb;
		fb = fbn - fb;
	}
	fb1 = (fb / f);
	fb2 = (fb % f);
	fbn1 = (fbn / f);
	fbn2 = (fbn % f);

	for (lui = 92; lui < 99; ++lui)
	{
		printf(", %lu", fbn1 + (fbn2 / f));
		printf("%lu", fbn2 % f);
		fbn1 = fbn1 + fb1;
		fb1 = fbn1 - fb1;
		fbn2 = fbn2 + fb2;
		fb2 = fbn2 - fb2;
	}
	printf("\n");
	return (0);
}
