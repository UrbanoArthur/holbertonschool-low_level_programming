#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - ooo
 * @grid: ooo
 * @height: ooo
 */
void free_grid(int **grid, int height)
{
	int a;

		if (grid == NULL || height <= 0)
		{
			return;
		}
		for (a = 0; a < height; a++)
		{
			free(grid[a]);
		}
		free(grid);
}
