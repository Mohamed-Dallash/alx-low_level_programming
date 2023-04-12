#include "main.h"
/**
 * free_grid - Unallocates a 2d array (grid)
 * @grid: pointer to grid
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}
