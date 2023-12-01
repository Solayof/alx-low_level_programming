#include "hash.h"

/**
 * add_node - add node into the generated index
 * @head: node head
 * @key: key to generate index
 * @value: value to store in the generated index
 * Return: head of the hash table on success or NULL otherwise
 */

has_node_t *add_node(hash_node_t **head, const char *key, char *value)
{
	hash_node_t *h = *head;

	while (h)
	{
		if (strcmp(key, h->key) == 0)
		{
			free(h->value);
			h->value = strdup(value);
			return (*head);
		}
	}
	h = malloc(sizeof(hash_node_t));
	if (!h)
		return (NULL);
	h->key = strdup(key);
	h->value = strdup(value);
	h->next = *head;
	*head = h;
	return (*head);
}
/**
 * hash_table_set - add to hash table
 * @ht: the hash table pionter
 * @key: key to generate index
 * @value: value to store at the generated index
 * Return: 1 on successfull 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k;

	if (!ht)
		return (0);
	if (!key || *key == '\0')
		return (0);
	k = key_index((unsigned char *)key, ht->size);
	if (add_node(&(ht->array[k]), key, value) == NULL)
		return (0);
	return (1);
}
