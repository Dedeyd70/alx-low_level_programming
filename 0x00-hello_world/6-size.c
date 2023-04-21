#include <stdio.h>

/**
 * main - This is the entryy point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	long int j;
	long long int n;
	char m;
	float k;

	printf("Size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of an int: %lu 4 byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a float: %lu 4 byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a long int: %lu 4 byte(s)\n", (unsigned long)sizeof(j));
	return (0);
}
