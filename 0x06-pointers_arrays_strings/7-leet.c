#include "main.h"

/**
 * leet - Encoding a string into 1337
 * @s: string to encode
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	int d = 0;
	int j;
	char a[] = "aAeEo0tTlL";
	char b[] = "4433007711";

	while (*(s + d) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + d) == a[j])
			{
				*(s + d) = b[j];
			}
		}
		d++;
	}
	return (s);
}
