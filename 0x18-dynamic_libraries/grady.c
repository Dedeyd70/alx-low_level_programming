#include <unistd.h>
#include <string.h>

int rand()
{
	static int d = -1;

	d++;
	if (d == 0)
		return 8;
	if (d == 1)
		return 8;
	if (d == 2)
		return 7;
	if (d == 3)
		return 9;
	if (d == 4)
		return 23;
	if (d == 5)
		return 74;
	return d * d % 30000;
}
