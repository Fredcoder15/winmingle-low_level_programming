#include "main.h"
#include <stdlib.h>

void free_grid(int **g, int h){
   h = 0;

	if (g[h] == NULL){
    while (h > 0){
      h--;
      free(g[h]);
	}
   }
	free(g);
}
