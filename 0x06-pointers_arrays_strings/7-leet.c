#include "main.h"

/**
 * leet - Encoding a string into 1337
 * @s: string to encode
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	char leet_table[256] = {0};
	char *leet_chars = "aAeEo0tTlL";
	char *leet_nums = "4433007711";
	int dee;

	for (dee = 0; leet_chars[dee] != '\0'; dee++)
	{
		leet_table[(int) leet_chars[dee]] = leet_nums[dee];
	}

	for (dee = 0; s[dee] != '\0'; dee++)
	{

		if (leet_table[(int) s[dee]] != 0)
		{
			s[dee] = leet_table[(int) s[dee]];
		}
	}
	return (s);
}
