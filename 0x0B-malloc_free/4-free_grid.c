#include "main.h"

 /**
  * free_grid - Frees a previously created 2 dimensional grid.
  * @grid: A 2D grid.
  * @height: The number of rows.
  */

void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}
