#include "main.h"
#include <stdio.h>
/* Author: Akpan-fred, Promise Friday
* Program: WinMingle Community C Training
 * Description: This program copies one string source to another destination string manually without using the in-built strcpy() function in C library.
  */
char *_strcpy(char *dest, char *src){
     char *start = dest;
	while(*src){
     *dest = *src;
	  src++;
      dest++;
	}
	 *dest = '\0';
     
	 return start;
}
