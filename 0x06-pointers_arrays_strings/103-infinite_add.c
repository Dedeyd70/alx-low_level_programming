#include "main.h"
#include <stdio.h>
#include <string.h>
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
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int dee = 0;
	int j, m;
	int sum;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);
	for (j = len1 - 1, m = len2 - 1; j >= 0 || m >= 0 || dee; j--, m--)
	{
		sum = dee;
		if (j >= 0)
			sum += n1[j] - '0';
		if (m >= 0)
			sum += n2[m] - '0';
		dee = sum / 10;
		r[len1 + len2 -j - m -1] = sum % 10 + '0';
	}
	for (j = 0, m = strlen(r) - 1; j < m; j++, m--)
	{
		char tmp = r[j];

		r[j] = r[m];
		r[m] = tmp;
	}
	return (r);
}
