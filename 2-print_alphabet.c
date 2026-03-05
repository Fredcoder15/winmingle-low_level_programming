#include <stdio.h>
#include <stdlib.h>
/*
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * This file writes letters of the alphabet from letter a to letter z.
 */
int main(void){
     char x='a';
	 while(x<='z'){
		 putchar(x);
		 x++;
	 } 
	 putchar('\n');
	 return(0);
}
