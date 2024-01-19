#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Searches for a value in in an array of integers
 * using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 * else return 0
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL*/
	if (array == NULL)
		return (-1);

	/* Iterate through the array using a loop*/
	for (i = 0; i < size; i++)
	{
		/* Print the current value being checked in the array*/
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

/* Check if the current value in the array is equal to the target value*/
		if (array[i] == value)
			return (i);
	}
	/*Return -1 if the value is not found in the array*/
	return (-1);
}
