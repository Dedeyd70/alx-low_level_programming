#include "main.h"

/**
 * rot13 - encoding strings with rot13
 * @r: the string
 * Return: value of r
 */
char *rot13(char *r)
{
	int e = 0;
	char lw[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char up[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *d = r;

	while (*r)
	{
		for (e = 0; e <= 52; e++)
		{
			if (*r == lw[e])
			{
				*r = up[e];
				break;
			}
		}
		r++;
	}
	return (d);
}
