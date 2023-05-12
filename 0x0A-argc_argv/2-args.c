#include "main.h"
#include <stdio.h>

/**
 * main - Printing all arguments
 * @argc: The argument count
 * @argv: The argument vector
 * Return: always 0(success)
 */
int main(int argc, char *argv[])
{
	while (--argc > 0)
	{
		printf("%s\n", *(++argv));
	}
	return (0);
}
