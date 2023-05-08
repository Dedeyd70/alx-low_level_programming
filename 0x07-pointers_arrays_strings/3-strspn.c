#include "main.h"

/**
 *  _strspn - the length of a prefix substring
 *  @s:the string to be used
 *  @accept: prefix ti be used
 *  Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int dee, jay;

	for (dee = 0; s[dee] != '\0'; dee++)
	{
		for (jay = 0; accept[jay] != '\0'; jay++)
		{
			if (s[dee] == accept[jay])
			{
				break;
			}
		}
		if (accept[jay] == '\0')
		{
			return (dee);
		}
	}
	return (dee);
}
