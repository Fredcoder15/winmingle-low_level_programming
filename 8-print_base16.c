/*Author: Akpan-fred, Promise Friday
 *  Program: WinMingle Community C Training
 *  Description: This prints all hexadecimal numbers
 */
#include <stdio.h>
#include <stdlib.h>
int main(void){   
     char  x='0';
	while(x<='9'){
     putchar(x);
	 x++;
	}

     x='a';
	while(x<='f'){
     putchar(x);
      x++;
	}
   putchar('\n');
   return(0);
}
