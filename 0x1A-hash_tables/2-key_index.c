#include "hash"

/**
 * key_index - generate index for hash table
 * @key: hash key
 * @size: hash table size
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size == 0)
		return (o);
	return (hash_djb2(key) % size);
}
