#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * Author: Akpan-fred, Promise Fridah
 * Program: WinMingle Community C Training
 * Description: This file intends to print out to my screen random numbers from zero to positive to negative at different times
 */

int main (void){
    int n;
	srand(time(0));
    n=rand()-RAND_MAX/2;
	if(n>0){
       printf("%i is positive\n", n);
	}
	else if(n<0)
		printf("%i is negative\n", n);
	else 
		printf("%i is equal to zero\n", n);

	return(0);
}
