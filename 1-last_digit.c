#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: This program output to the screen the last digit of a random number when compiled and executed.
 * */
int main(void){
	int n;
	int last;
	srand(time(0));
	n = rand() - RAND_MAX/2;
	last = n % 10;
	if (last > 5)
	   printf("last digit of %d is %d and it is greater than 5\n", n, last);
	else if (last == 0)
	   printf("last digit of %d is %d amd it is very much equal to zero\n", n, last);
	else if (last < 6)
	   printf("last digit of %d is %d and it is less than six but not equal to zero\n", n, last);
	
	return(0);
}
