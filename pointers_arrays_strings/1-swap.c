#include "main.h"
#include <stdio.h>
/**
 * Swap - A function that swaps the values of two integer.
 *
 * Return: The variable A and B are not the same that depart.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
