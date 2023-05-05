#include "main.h"

/**
 * leet - Encoding a string into 1337
 * @s: string to encode
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	int d = 0;
	int j = 0;
	char a[] = "aAeEo0tTlL";
	char b[] = "4433007711";

	for (d = 0; s[d] != '\0'; d++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(d + s) == *(j + a))
			{
				*(s + d) = *(b + j);
			}
		}
	}
	return (s);
}
