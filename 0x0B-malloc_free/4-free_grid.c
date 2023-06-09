#include "main.h"

/**
 * free_grid - frees a 2D grid
 * @grid: 2D array
 * @height: int
 * no return - void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
