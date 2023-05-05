#include "main.h"

/**
 * rot13 - encoding strings with rot13
 * @r: the string
 * Return: the encoded string
 */
char *rot13(char *r)
{
	char *start = r;

	while (*r)
	{
		if ((*r >= 97 && *r <= 109) || (*r >= 65 && *r <= 77))
		{
			*r += 13;
		}
		else if ((*r >= 110 && *r <= 122) || (*r >= 78 && *r <= 90))
		{
			*r -= 13;
		}
		++r;
	}
	return (start);
}
