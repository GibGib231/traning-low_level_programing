#include<stdio.h>
#include<stdlib.h>
#include"main.h"
void free_grid(int **grid, int height)
{
	int amb;

	for (amb = 0; amb < height; amb++)
	free(grid[amb]);
}
