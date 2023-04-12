#include "main.h"
/**
 * alloc_grid - Creates a two dimensional array (grid)
 * @width: grid width
 * @height: grid height
 * Return: Pointer to the start of the array,
 *	NULL if the array cannot be created
 */
int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	while (height--)
	{
		grid[height] = malloc(sizeof(int) * width);
		if (grid[height] == NULL)
			return (NULL);
		for (i = 0; i < width; i++)
			grid[height][i] = 0;
	}

	return (grid);
}
