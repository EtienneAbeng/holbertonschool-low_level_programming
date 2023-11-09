#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - A functions that returns a pointer to 2 dimensial array
 * of integers and each element of the grid should be initializes to 0.
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated grid of NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}

			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
