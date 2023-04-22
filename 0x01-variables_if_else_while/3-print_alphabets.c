#include <stdio.h>

/**
 * main - Entry point
 *
 * description: lower case and upper case
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	char jq;
	char dd;

	for (jq = 'a'; jq <= 'z'; jq++)
	{
		putchar(jq);
	}

	for (dd = 'A'; dd <= 'Z'; dd++)
	{
		putchar(dd);
	}

	putchar('\n');
	return (0);
}
