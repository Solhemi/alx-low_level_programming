#include "main.h"
#include <stdlib.h>

/**
 * free_grid - fn frees grid
 * @height: int
 * @grid: int
 *
 * Return: 0
 */

void free_grid(int **grid, int height)

{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
