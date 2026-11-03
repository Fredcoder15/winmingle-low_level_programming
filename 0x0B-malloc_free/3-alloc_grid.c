
/*
 * Author: Akpan-fred, Promise Friday.
 * Program: winmingle Community C Training.
 * Description: Allocates a two-dimensional grid of integers
 *              and initializes all cells to zero.
 */

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a two-dimensional grid of integers
 * @w: Number of columns
 * @h: Number of rows
 *
 * Return: Pointer to the grid, or NULL if allocation fails
 */
int **alloc_grid(int w, int h)
{
    int i;
    int j;
    int **grid;
    if(w <= 0 || h <= 0)
    {
    return(NULL);
    }
    grid = malloc(h * sizeof(int *));
    if(grid == NULL)
    {
    return (NULL);
    }
    for (i = 0; i < h; i++)
    {
    grid[i] = malloc(w * sizeof(int));
    if(grid[i] == NULL)
    {
       while(i > 0)
       {
       i--;
       free(grid[i]);
       }
    free(grid);
    return (NULL);
    }
    for (j = 0; j < w; j++)
    {
    grid[i][j] = 0;
    }
    }
    return (grid);
}

