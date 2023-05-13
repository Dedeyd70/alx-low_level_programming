#include <stdio.h>
#include <stdlib.h>

/**
 * main - Printing minimum numbers
 * @argc: the argument count
 * @argv: the argument vector
 * Return: always 0(success) and 1 for error
 */
int main(int argc, char *argv[])
{
	int s, cent;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	for (s = 0; cent > 0; s++)
	{
		if (cent - 25 >= 0)
			cent = cent - 25;
		else if (cent - 10 >= 0)
			cent = cent - 10;
		else if (cent - 5 >= 0)
			cent = cent - 5;
		else if (cent - 2 >= 0)
			cent = cent - 2;
		else if (cent - 1 >= 0)
			cent = cent - 1;
	}
	printf("%d\n", s);
	return (0);
}
