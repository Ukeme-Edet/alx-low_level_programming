#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: The two dimensional grid to be freed
 * @height: The height of the two dimensional grid to be freed
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		free(grid[i++]);
	free(grid);
}
