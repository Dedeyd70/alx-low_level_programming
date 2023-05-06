#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int d1 = 0, d2 = 0, j, d, dee, jay, sam = 0;

	while (*(n1 + d1) != '\0')
		d1++;
	while (*(n2 + d2) != '\0')
		d2++;
	if (d1 >= d2)
		d = d1;
	else
		d = d2;
	if (size_r <= d + 1)
		return (0);
	r[d + 1] = '\0';
	d1--, d2--, size_r--;
	dee = *(n1 + d1) - 48, jay = *(n2 + d2) - 48;
	while (d >= 0)
	{
		j = dee + jay + sam;
		if (j >= 10)
			sam = j / 10;
		else
			sam = 0;
		if (j > 0)
		*(r + d) = (j % 10) + 48;
		else
			*(r + d) = '0';
		if (d1 > 0)
			d1--, dee = *(n1 + d1) - 48;
		else
			dee = 0;
		if (d2 > 0)
			d2--, jay = *(n2 + d2) - 48;
		else
			jay = 0;
		d--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
