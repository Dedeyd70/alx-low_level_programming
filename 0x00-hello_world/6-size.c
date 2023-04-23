#include <stdio.h>

/**
 * main - Printing the size of various types
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long ini: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
