#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: address of 2d grid
 * @height: height of grid
 * Description: frees 2d grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)

{
	int counter;

	for (counter = 0; counter < height; counter++)
	{
		free(grid[counter]);
	}
	free(grid);
}

