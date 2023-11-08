#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function that create an array of chars and initialize
 *
 * @NULL: return a size
 * Returns: NULL if pointer to array is fails. 
 */
char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc( sizeof(char) * size);
	
	if (array == 0)
	{
		return (NULL);
	}	

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
