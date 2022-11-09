#include "main.h"
#include <stdlib.h>

/**
 * free_grid - releases memory allocation
 * @grid: array
 * @height: int value
 */
void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}
	free(grid);
}
