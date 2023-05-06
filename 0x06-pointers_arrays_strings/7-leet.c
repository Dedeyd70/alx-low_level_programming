#include "main.h"

/**
 * *leet - encoding strings into 1337
 * @n: the string
 * Return: n
 */
char *leet(char *n)
{
	int d, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (d = 0; n[d] != '\0'; d++)
	{
		for (j = 0; j < 10; j++)
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
