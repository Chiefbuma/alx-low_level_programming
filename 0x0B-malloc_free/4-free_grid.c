#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid -array
 * @grid: grid
 * @height: h f grid
 * Description:  memory of grid
 * Return: 0
 **/

void free_grid(int **grid, int height)
{
int k;

for (k = 0; k < height; k++)
{
free(grid[k]);
}
free(grid);
}
