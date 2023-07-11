#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid created by your alloc_grid function
 * @grid: grid
 * @height:height dimension
 *
 * Return: grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
