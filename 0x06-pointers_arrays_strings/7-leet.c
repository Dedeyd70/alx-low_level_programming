#include "main.h"

/**
 * leet - encoding strings
 * @n: string to be used
 * Return: n
 */
char *leet(char *n)
{
	int d;
	int j;
	char s1[] = "aAeEo0tTlL";
	char s2[] = "4433007711";

	for (d = 0; n[d] != '\0'; d++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[d] == s1[j])
			{
				n[d] = s2[j];
				break;
			}
		}
	}
	return (n);
}
