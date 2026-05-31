#include "main.h"
#include <stdio.h>

/* Author: Akpan-fred, Promise Friday
 *  * Program: WinMingle Community C Training
 *   * Description: This program outputs the summation of the principal and secondary diagonals of two multidimensional arrays after casting the arrays */
void print_diagsums(int *a, int size){
   int sum1 = 0;
   int sum2 = 0;
   int i;

   for (i = 0; i < size; i++){
   sum1 += a[i * size + i];
   sum2 += a[i * size + (size - 1 -i)];
  }

   printf("%d, %d\n", sum1, sum2);
}
