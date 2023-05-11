#include "main.h"

/**
 * is_palindrome - Finding if a string is a palindrome
 * @s: chr to be used
 * @d: start
 * @e: end
 * Return: 1 if string is palindrome or 0 if not
 */
int is_palindrome_helper(char *s, int d, int e)
{
	if (d >= e)
	{
		return (1);
	}
	if (s[d] != s[e])
	{
		return (0);
	}
	return (is_palindrome(s, d + 1, e - 1));
}

/**
 * is_palindrome - Finding if a string is a palindrome
 * @s: the string
 * Return: 1 if string is palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int 
}
