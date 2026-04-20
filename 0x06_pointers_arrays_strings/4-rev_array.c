#include "main.h"
#include <stdio.h>
/* Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: This program reverses an array of numbers */

void reverse_array(int *a, int n){
int i;
 
for (i = 0; i < n / 2; i++){
   int temp = a[i];

   a[i] = a[n - 1 - i];

   a[n - 1 - i] = temp;
}
}
