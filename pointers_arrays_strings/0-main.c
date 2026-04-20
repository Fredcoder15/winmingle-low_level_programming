#include <stdio.h>
#include "main.h"
/* Author: Akpan-fred, Promise Friday
 *  * Program: WinMingle Community C Training
 * Description: This file uses a pointer to change the value of a variable at its address
  */
int main(void)
{ 
	int n;
	n = 402;
	printf("n is formerly  %d\n", n);
	reset_to_98(&n);
	printf("n is presently: %d\n", n);
    return(0);		
}
