#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adding two numbers
 * @r: is the input value
 * @n1: first num
 * @n2: second num
 * @size_r: is the size of the buffer
 * Return:if result is not stored in r, function must return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int d1 = 0, d2 = 0, dee, jay, mar, ner, sum = 0;

	while (*(n1 + d1) != '\0')
		d1++;
	while (*(n2 + d2) != '\0')
		d2++;
	if (d1 >= d2)
		jay = d1;
	else
		jay = d2;
	if (size_r <= jay + 1)
		return (0);
	r[jay + 1] = '\0';
	d1--, d2--, size_r--;
	mar = *(n1 + d1) - 48, ner = *(n2 + d2) - 48;
	while (jay >= 0)
	{
		dee = mar + ner + sum;
		if (dee >= 10)
			sum = dee / 10;
		else
			sum = 0;
		if (dee > 0)
		*(r + jay) = (dee % 10) + 48;
		else
			*(r + jay) = '0';
		if (d1 >= 0)
			d1--, mar = *(n1 + d1) - 48;
		else
			mar = 0;
		if (d2 > 0)
			d2--, ner = *(n2 + d2) - 48;
		else
			ner = 0;
		jay--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
