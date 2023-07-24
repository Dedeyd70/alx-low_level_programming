#include "main.h"

/**
 * *_strstr - Locating a substring
 * @haystack: the string to be used
 * @needle: the substring
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *nee = needle;

		while (*nee != '\0' && *hay == *nee)
		{
			hay++;
			nee++;
		}
		if (*nee == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
