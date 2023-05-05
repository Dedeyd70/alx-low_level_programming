#include "main.h"

/**
 * leet - encoding strings
 * @s: string to be used
 * Return: s
 */
char *leet(char *s)
{
	int d;
	int j;
	char s1[] = "aAeEo0tTlL";
	char s2[] = "4433007711";

	for (d = 0; s[d] != '\0'; d++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[d] == s1[j])
			{
				s[d] = s2[j];
				break;
			}
		}
	}
	return (s);
}
