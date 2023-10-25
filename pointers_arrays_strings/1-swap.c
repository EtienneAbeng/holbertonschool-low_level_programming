#include "main.h"
#include <stdio.h>
/**
 * Swap - A function that swaps the values of two integer.
 *
 * @swap - interchange the variable
 * @'a' - parameter 'a' take a value of 'b'.
 * @'b' - parameter 'b' take a value of 'a'.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
