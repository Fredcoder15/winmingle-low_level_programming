#include <stdio.h>
#include "main.h"
/* Author: Akpan-fred, Promise Friday
* Program: WinMingle Community C Training
 * Description: This program output the swapped values between two variables */

int main(void)
{
	int a = 98;
	int b = 42;
	printf("a=%d, and b=%d\n", a,b);
	swap_int(&a,&b);
	printf("new a=%d and new b=%d\n", a,b);
	return(0);
}
