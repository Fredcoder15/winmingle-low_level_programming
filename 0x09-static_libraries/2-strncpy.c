#include "main.h"
/* Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: This program copies a source string to a destination string with limit just like in the standard library
  */

char *_strncpy(char *dest, char *src, int n){
 char  *start = dest;
 int i = 0;

  while (*src != '\0' && i <  n){
    *dest = *src;
	i++;
	dest++;
	src++;
  }

  return start;
}
