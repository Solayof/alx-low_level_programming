#include "hash.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 *
 * @ht: hash table pointer
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *h;
	unsigned long int i;
	char *sep;

	if (!ht)
		return;

	printf("{");
	sep = "";

	for (i = 0; i < ht->size; i++)
	{
		h = ht->array[i];
		while (h)
		{
			printf("%s'%s': '%s'", sep, h->key, h->value);
			sep = ", ";
			h = h->next;
		}
	}
	printf("}\n");
}
