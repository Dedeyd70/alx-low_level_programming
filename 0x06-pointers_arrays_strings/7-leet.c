#include "main.h"
#include <stdio.h>

/**
 * leet - changing vowels to numbers
 * @s: string to be used
 * Return: string with all vowels changed
 */
char *leet(char *s)
{
	int d;
	int j;
	char a[] = "aAeEo0tTlL";
	char b[] = "4433007711";

	for (d = 0; s[d] != '\0'; d++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[d] == a[j])
			{
				s[d] = b[j];
				break;
			}
		}
	}
	return (s);
}
