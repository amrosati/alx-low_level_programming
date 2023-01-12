#include "main.h"

/**
 * free_grid - frees a 2d integers grid
 * @grid: 2d array to free
 * @height: size of memory
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));

	free(grid);
}
