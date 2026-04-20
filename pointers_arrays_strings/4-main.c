#include <stdio.h>
#include "main.h"
/* Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: This program output strings in reverse order*/

int main(void){
	int len;
    char *str = "I don't fear computers, I fear the lack of it - Asimov Jack";
	len = _strlen(str);
    printf("string length is:%d\n\n", len);
	print_rev(str);

	return(0);
}
