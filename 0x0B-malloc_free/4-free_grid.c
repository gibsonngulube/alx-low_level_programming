#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *free_grid - frees memory for a 2-D array
  *@grid: array address
  *@height: num of rows of the grid
  *Return: nothing
  */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
