#include <stdio.h>
#include <stdlib.h>
/* Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 *  Description: This program writes letters of the alphabet in lowercase and then in uppercase
 */
int main(void){
    char x='A';
	while (x<='Z'){
		putchar(x);
	    x++;
	}
	putchar('\n');
	return(0);
}
