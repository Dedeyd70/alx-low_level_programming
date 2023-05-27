#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
/**
 * _realloc - Alloocating a memory block
 * @ptr: The pointer
 * @old_size: the old size
 * @new_size: the size
 * Return: a pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
        char *p;

        if (new_size == old_size)
                return (ptr);
        if (ptr == NULL)
        {
                p = malloc(new_size);
                if (p == 0)
                        return (NULL);
                free(ptr);
                return (p);
        }
        if (new_size == 0 && ptr != NULL)
        {
                free(ptr);
                return (NULL);
        }
        p = malloc(new_size);
        if (p == 0)
                return (NULL);
        memcpy(p, ptr, old_size);
        free(ptr);
        return (p);
}

/**
 * _memcpy - copying a memeory
 * @dest: stored area
 * @src: copied area
 * @n: the bytes num
 * Return: dest
 */
char *_memcpy(char *dest, char *src, size_t n)
{
	char *cdest = dest;
	const char *csrc = src;
	size_t d;

	for (d = 0; d < n; d++)
	{
		cdest[d] = csrc[d];
	}
	return (dest);
}
