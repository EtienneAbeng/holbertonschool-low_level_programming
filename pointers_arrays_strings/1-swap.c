#include "main.h"
#include <stdio.h>
/**
 * swap - Swaps the values of two integers.
 *
 * @a: Pointer to the first integer.
 *
 * @b: pointer to the second integer.
 *
 * This function swaps the values of the two integer pointed.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
