#include "hash_tables.h"

/**
 * hash_table_print - printing the hash table
 * @ht: the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int d;
	hash_node_t *temp;
	char *dee;

	if (ht == NULL)
		return;

	printf("{");
	dee = "";

	for (d = 0; d < ht->size; d++)
	{
		temp = ht->array[d];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", dee, temp->key, temp->value);
			dee = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
