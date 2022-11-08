#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memory allocated
 * @grid: Pointer to the first item in array
 * @height: Number of pointers in array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}

	free(grid);
}
