#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table pointer
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *t;
	hash_node_t *h;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		t = ht->array[i];
		while ((h = t) != NULL)
		{
			t = t->next;
			free(t->key);
			free(h->value);
			free(h);
		}
	}
	free(ht->array);
	free(ht);
}
