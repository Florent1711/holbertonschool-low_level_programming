#include "main.h"
#include <stdlib.h>

/**
 * free_grid - libère une grille bidimensionnelle
 * @grid: grille à libérer
 * @height: hauteur
 *
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
