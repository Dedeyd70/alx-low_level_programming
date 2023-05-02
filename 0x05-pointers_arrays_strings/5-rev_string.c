#include "main.h"

/**
 * rev_string - reversing a string
 * @s:char to be used
 * Return: always 0(success)
 */
void rev_string(char *s)
{
	int dee, d, f;
	char g;


	for (dee = 0; s[dee] != '\0'; dee++)
	d = 0;
	f = dee / 2;

	while (f--)
	{
		g = s[dee - d - 1];
		s[dee - d - 1] = s[d];
		s[d] = g;
		d++;
	}
}
