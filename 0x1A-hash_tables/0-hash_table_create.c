#include "hash_tables.h"

/**
 * hash_table_create - newly created hash table
 * @size: the size of the array
 * Return: returns a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->size = size;
	return (hash_table);
}
