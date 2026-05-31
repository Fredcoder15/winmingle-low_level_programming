#include "main.h"
#include <stddef.h>
/* Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
  * Description: This program searches the first matched character in a string * */

char *_strpbrk(char *s, char *accept){
 unsigned int i = 0;
 unsigned int j;

 while(s[i]){
  j = 0;

  while(accept[j]){
    if(s[i] == accept[j]){
     return &s[i];
	}
	j++;
  }
  i++;
 }

 return NULL;
}
