#include "main.h"

/**
 * *cap_string - Capitalizing all words of a string
 * @s: string to be used
 * Return: s
 */
char *cap_string(char *s)
{
	int d;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (d == 0 || s[d - 1] == ' ')
		{
			if (s[d] >= 97 && s[d] <= 122)
			{
				s[d] -= (97 - 65);
			}
		}

		else
		{
			if (s[d] >= 65 && s[d] <= 90)
			{
				s[d] += (97 - 65);
			}
		}
	}
	return (s);
}
