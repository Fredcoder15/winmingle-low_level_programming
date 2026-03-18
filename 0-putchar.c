#include "main.h"
#include <stdio.h>

/*Author: Akpan-fred, Promise Friday
 *  Program: WinMingle Community C Training
 *  Description: This program prints output to screen without in-built function
 */
int main(void){
	char c;
	int i=0;
    char a[] = "_putchar";
	while(i<=8){
    c = a[i];
	_putchar(c);
	i++;
	}
	_putchar('\n');
return (0);
}
