#include "main.h"
#include <string.h>

/**
 * *cap_string - Capitalizing all words of a string
 * @caps: string to be used
 * Return: pointer to new string
 */
char *cap_string(char *caps)
{
	int p = 0;

	while (caps[p])
	{
		while (!(caps[p] >= 'a' && caps[p] <= 'z'))
			p++;

		if (caps[p - 1] == 32 ||
		    caps[p - 1] == 9 ||
		    caps[p - 1] == 10 ||
		    caps[p - 1] == 44 ||
		    caps[p - 1] == 59 ||
		    caps[p - 1] == 46 ||
		    caps[p - 1] == 33 ||
		    caps[p - 1] == 63 ||
		    caps[p - 1] == 34 ||
		    caps[p - 1] == 40 ||
		    caps[p - 1] == 41 ||
		    caps[p - 1] == 123 ||
		    caps[p - 1] == 125 || /** assume the ascii values from lines 18 **/
		    p == 0)
			caps[p] -= 32;
		p++;
	}
	return (caps);
}
