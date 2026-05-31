#include "main.h"
#include <stddef.h>
/* Author: Akpan-fred, Promise Friday
 *  * Program: WinMingle Community C Training
 *   * Description: This searches for a string in another string and rturns the pointer there */
char *_strstr(char *haystack, char *needle){
  unsigned int a = 0;
  unsigned int b;

  while(needle[a]){
    b = 0;

	while(haystack[b]){
     if(needle[a] == haystack[b]){
        return &needle[a];
	 }
	 b++;
	}
	a++;
  }
     return NULL;
}
