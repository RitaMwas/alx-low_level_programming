#include "main.h"

/**
 * free_grid - Entry point
 *
 * Description: Frees memory for a 2d grid
 * created by the alloc_grid() function.
 * @grid: Pointer to the grid.
 * @height: Height of grid.
 * Return: No return value.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
