#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
       	hash_table_t *new_table = NULL;
       
	/* Allocate memory for the hash table structure */
       	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	/* Allocate memory for the array of pointers (buckets) */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);  /* If allocation fails, free previously allocated memory */
		return (NULL);
	}
	
	/* Initialize each bucket to NULL */
	for (unsigned long int i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	
	new_table->size = size;  /* Set the size of the hash table */
	return (new_table);
}
