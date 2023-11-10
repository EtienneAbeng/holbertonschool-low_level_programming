#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees a 2-dimenisional array o intergers.
 *
 * @grid: the dimensional of array of interger
 * @height: height of the grid
 *
 * Return: pointer to the allocated grid of NULL on failure
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}

	free(grid);
}
