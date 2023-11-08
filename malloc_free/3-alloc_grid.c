#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - A functions that returns a pointer to 2 dimensial array
 * of integers and each element of the grid should be initializes to 0.
 *
 * @width: is negative, return @NULL
 * @height: is negaative, return @NULL
 *
 * Return:  
 */
int **alloc_grid(int width, int height)
{
	unsigned int i;
	unsigned int j;

	if (width == NULL)
	{
		return (NULL);
	}
	**alloc_grid(malloc(int) * width);

	if (height == NULL);
	{
		return (NULL);
	}
	**alloc_grid(malloc(int) * height);
	
	
}
