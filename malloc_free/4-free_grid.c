#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * free_grid - function that return a pointer to 2
 * dimensional arrray of integer
 *
 * @grid:  width
 * @height: heigh
 * Return: array 2d
 */
void free_grid(int **grid, int height)

{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(grid[i]);
			}
			free(grid);
		}
	}


}

