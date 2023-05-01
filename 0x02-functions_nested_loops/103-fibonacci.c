#include <stdio.h>

/**
 * main - generating the fibonacci sequence, by starting with 1 and 2
 * Return: always 0(Success)
 */
int main(void)
{
	int sum = 0;
	int d = 1, f = 2;
	int dee;

	while (f <= 4000000)
	{
		if (f % 2 == 0)
		{
			sum += f;
		}
		dee = f;
		f += d;
		d = dee;
	}

	printf("%d\n", sum);
	return (0);
}
