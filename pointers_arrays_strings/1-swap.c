#include "main.h"
/* Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: This is the function that does the swapping */
void swap_int(int *a, int *b){
   int tmp;
   tmp = *a;
   *a = *b;
   *b = tmp;
}
