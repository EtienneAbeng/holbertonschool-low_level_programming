#include "main.h"
#include <stdio.h>
/**
 * print_array - Print the elemnts arraybinteger.
 *
 * @a: Array
 * @n: Number in the array.
 */

void print_array(int *a, int n)
{
	int  i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(",");
		}
	}

	printf("\n");
}
