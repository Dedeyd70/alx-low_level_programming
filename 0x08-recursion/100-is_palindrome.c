#include "main.h"
#include <string.h>

/**
 * check_palindrome - Finding if a string is a palindorme
 * @s: the string
 * @d: num to be used
 * @e: num to be used
 * Return: length
 */
int check_palindrome(char *s, int d, int e)
{
	if (d >= e)
	{
		return (1);
	}
	if (s[d] != s[e])
	{
		return (0);
	}
	return (check_palindrome(s, d + 1, e - 1));
}

/**
 * is_palindrome - Find id a string is a palindrome
 * @s: the string to be used
 * Return: 1 if string is palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int ln = strlen(s);

	if (ln == 0)
	{
		return (1);
	}
	return (check_palindrome(s, 0, ln - 1));
}
