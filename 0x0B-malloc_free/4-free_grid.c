#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: Pointer to a 2D grid of integers.
 * @height: Height of the grid.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}

