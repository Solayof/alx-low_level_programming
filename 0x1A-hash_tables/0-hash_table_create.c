#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: table size
 * Return: pointer to the table, NULL otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **av;
	unsigned long int size;

	av = malloc(sizeof(hash_node_t *) * size);
	if (!av)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	for (i = 0; i < size; I++)
		av[i] = NULL;
	table->array = av;
	table->size;

	return (table);
}
