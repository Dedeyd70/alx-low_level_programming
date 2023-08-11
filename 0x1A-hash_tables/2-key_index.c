#include "hash_tables.h"

/**
 * key_index - A function that gives you thye index of a key
 * @key: The key
 * @size: the size of the array of the hash table
 * Return: The the index at key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
