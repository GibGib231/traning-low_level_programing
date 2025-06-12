#include<stdio.h>
#include"main.h"
#include<stdlib.h>
int **alloc_grid(int width, int height)
{
	int **gib;
	int b;
	int i;

	if(width <= 0 || height <= 0)
	
		return NULL;

      for (i = 0; i < width; i++)
      {
	
	gib = malloc(sizeof(int *) * width);
	
		for (b = 0; b < height; b++)
		
		gib[b] =  malloc(sizeof(int ) * height);
		return gib;
		free(gib);
	}
	return 0;
}
