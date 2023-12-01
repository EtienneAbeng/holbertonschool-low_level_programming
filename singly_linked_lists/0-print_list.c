#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print all the elemnt of the list_t list
 * @h: The lis_t list
 *
 * return: the number of node in h
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h -> str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h -> len, h-> str);
		}
		nodes++;
		h = h -> next;
	}
	return (nodes);
}
