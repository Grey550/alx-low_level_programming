#include "hash_tables.h"

/**
 * key_index - index of the key
 *
 * @key: the key of the index
 * @size: the size of the array of the hash table
 * Return: returns the index where the value should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;

	idx = hash_djb2(key);
	idx %= size;
	return (idx);
}
