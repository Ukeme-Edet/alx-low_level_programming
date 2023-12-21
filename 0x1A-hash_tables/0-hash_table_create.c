#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nht = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!nht)
		return (NULL);
	nht->size = size;
	nht->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (!nht->array)
	{
		free(nht);
		return (NULL);
	}
	return (nht);
}
