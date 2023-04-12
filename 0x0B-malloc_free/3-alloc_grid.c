#include "main.h"
/**
 * free_mem - frees allocated memory
 * @grid: grid to be freed
 * @height: grid height
 */
void free_mem(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}

/**
 * alloc_grid - Creates a two dimensional array (grid)
 * @width: grid width
 * @height: grid height
 * Return: Pointer to the start of the array,
 *	NULL if the array cannot be created
 */
int **alloc_grid(int width, int height)
{
	int **grid, h = 0, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	while (h < height)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			free_mem(grid, h);
			return (NULL);
		}
		for (i = 0; i < width; i++)
			grid[h][i] = 0;
		h++;
	}

	return (grid);
}
