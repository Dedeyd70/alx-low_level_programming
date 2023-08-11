#include "hash_tables.h"

/**
 * hash_table_create - creating a hast table.
 * @size: The size of the array
 * Return: the newly created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;
	unsigned long int d;

	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);

	tab->size = size;
	tab->array = malloc(sizeof(hash_node_t *) * size);
	if (tab->array == NULL)
		return (NULL);
	for (d = 0; d < size; d++)
		tab->array[d] = NULL;

	return (tab);
}

