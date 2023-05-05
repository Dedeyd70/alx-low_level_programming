#include "main.h"

/**
 * leet - changing vowels to numbers
 * @s: string to be used
 * Return: string with all vowels changed
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
