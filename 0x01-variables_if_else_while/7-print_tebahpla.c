#include <stdio.h>

/**
 * main - The reverse alphabets
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
