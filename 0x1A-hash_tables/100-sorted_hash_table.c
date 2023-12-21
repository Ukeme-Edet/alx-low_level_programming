#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 * Return: pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *nht = (shash_table_t *)malloc(sizeof(shash_table_t));

	if (!nht)
		return (NULL);
	nht->size = size;
	nht->array = (shash_node_t **)malloc(sizeof(shash_node_t *) * size);
	if (!nht->array)
	{
		free(nht);
		return (NULL);
	}
	nht->shead = NULL;
	nht->stail = NULL;
	return (nht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: sorted hash table to add element to
 * @key: key of the element to add
 * @value: value of the element to add
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL, *tmp = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (!ht->shead)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		if (strcmp(new_node->key, ht->shead->key) < 0)
		{
			new_node->sprev = NULL;
			new_node->snext = ht->shead;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
		else if (strcmp(new_node->key, ht->stail->key) > 0)
		{
			new_node->sprev = ht->stail;
			new_node->snext = NULL;
			ht->stail->snext = new_node;
			ht->stail = new_node;
		}
		else
		{
			tmp = ht->shead;
			while (tmp)
			{
				if (strcmp(new_node->key, tmp->key) < 0)
				{
					new_node->sprev = tmp->sprev;
					new_node->snext = tmp;
					tmp->sprev->snext = new_node;
					tmp->sprev = new_node;
					break;
				}
				tmp = tmp->snext;
			}
		}
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: sorted hash table to look into
 * @key: key to look for
 * Return: value associated with the element, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp = NULL;
	unsigned long int index = 0;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	unsigned long int flag = 0;

	if (!ht)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	unsigned long int flag = 0;

	if (!ht)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp = NULL, *tmp2 = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			tmp2 = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = tmp2;
		}
	}
	free(ht->array);
	free(ht);
}
