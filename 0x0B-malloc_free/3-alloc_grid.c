#include "main.h"
#include <stdlib.h>

int **alloc_grid(int w, int h){
int i = 0;
int j = 0;
int **grid;

if(h == 0 || w == 0){
   return (NULL);
}

grid = malloc(h * sizeof(int *));
if (grid == NULL){
    return (NULL);
}

for (i = 0; i < h; i++){

    grid[i] = malloc(w * sizeof(int));

    for (j = 0; j < w; j++){
       grid[i][j] = 0;
	}
}


  return (grid);
}
