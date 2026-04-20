#include <stdio.h>
#include "main.h"
/* Author: Akpan-fred, Promise Friday
* Program: WinMingle Community C Training
 * Description: This program returns the length of a string*/

int main(void){
 char *str = "My first strlen!";
 int len = _strlen(str);
 
 printf("the length of string is: %d\n", len);

 return(0);

}
