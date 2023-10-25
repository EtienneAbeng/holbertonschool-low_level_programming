#include "main.h"
#include <stdio.h>
/**
 * Arrays - Arrays are not pointers
 *
 * @arrays
 */

void print_array(int *a, int n)
{
	int  i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i] );
	}
	
	printf("\n");
}
