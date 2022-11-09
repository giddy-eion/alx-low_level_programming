#include "main.h"
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	int b;

	for (b = height; b >= 0; b--)
	{
		free(grid[b]);
	}
	free(grid);
}
