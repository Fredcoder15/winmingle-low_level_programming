#include "main.h"
#include <stdio.h>
/* Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training

 *  Description: This program output an 8 by 8 2-dimensional arrays 
 *  */

void print_chessboard(char (*a)[8]){
   int i,j;

   for (i = 0; i < 8; i++){

       for (j = 0; j < 8; j++){
       printf("%c", a[i][j]);
	   }
	   printf("\n");
   }
}
