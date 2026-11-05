
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Frees a two-dimensional grid of integers.
 */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a two-dimensional grid
 * @grid: The grid to free
 * @height: Number of rows in the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{   
    
    int i; 
    if(grid == NULL)
    {
      return;
    }
    /*This works because we assume that the grid and all rows are already allocated succesfully */
    for(i = 0; i < height; i++)
    {
    free(grid[i]);
    }
    free(grid); 
    /* This code block is for the case of any particular row or grid failure, then we can free from there going backwards but it still works here nevertheless 
    while(height > 0)
    {
    height--;
    free(grid[height]);
    }
    free(grid);*/
}

