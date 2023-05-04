#include "main.h"

/**
 * leet - Encoding a string into 1337
 * @n: string to encode
 * Return: value of n
 */
char *leet(char *n)
{
	int dee, jay;
	char d[] = "aAeEo0tTlL";
	char j[] = "4433007711";

	for (dee = 0; n[dee] != '\0'; dee++)
	{
		for (jay = 0; jay < 10; jay++)
		{
			if (n[dee] == d[jay])
			{
				n[dee] = j[jay];
			}
		}
	}
	return (n);
}
