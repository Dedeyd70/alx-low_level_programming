#include <stdio.h>
#include "main.h"

/**
 * main - Printing the name of a program
 * @argc: The argument count
 * @argv: The argument vector
 * Return: always 0(success)
 */
int main(int argc, char *argv[])
{
	(void) argc;/* argc unused */
	printf("%s\n", (argv[0]));

	return (0);
}
