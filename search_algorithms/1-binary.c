#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: must return the index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 * else 0
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	/* Check if the array is NULL*/
	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	/* Binary search algorithm*/
	while (right >= left)
	{
		printf("Searching in array: ");

	/* Print the elements being considered in the search range*/
		for (i = left; i < right; i++)

			printf("%d, ", array[i]);

		printf("%d\n", array[i]);
		/* Calculate the middle index*/

		i = left + (right - left) / 2;

		/* Check if the middle element is the target value*/
		if (array[i] == value)
			return (i);
		/* If the target value is smaller, search the left half*/
		if (array[i] > value)
			right = i - 1;
		/*If the target value is larger, search the right half*/
		else
			left = i + 1;
	}
	/*Return -1 if the value is not found in the array*/
	return (-1);

}
