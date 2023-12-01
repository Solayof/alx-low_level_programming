#include "hash_tables.h"

/**
 * hash_table_get - get value by the given key
 *
 * @ht: hash table pointer
 * @key: given key
 * Return: value of the hash.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k;
	hash_node_t *h;

	if (!ht)
		return (NULL);

	if (!key || *key == '\0')
		return (NULL);

	k= key_index((unsigned char *)key, ht->size);

	tmp = ht->array[k];

	while (h)
	{
		if (strcmp(h->key, key) == 0)
			return (h->value);
		h = h->next;
	}

	return (NULL);
}
