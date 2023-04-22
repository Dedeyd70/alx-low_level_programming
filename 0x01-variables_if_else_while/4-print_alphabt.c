#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: not printing alphabets q and e
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		if (f != 'q' && f != 'e')
			putchar(f);
	}

	putchar ('\n');
	return (0);
}
