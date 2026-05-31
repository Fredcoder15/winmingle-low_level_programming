#include "main.h"
#include <stddef.h>
/* Author: Akpan-fred, Promise Friday
 *  * Program: WinMingle Community C Training
 *   * Description: This program locates the a character in a string */

char *_strchr(char *s, char c){
  unsigned int i = 0;
  while (s[i] != '\0'){
    if(s[i] == c){
      return &s[i];
	}
    i++;
  }

  if(s[i] == '\0'){
      return &s[i];
  }

  return NULL;

  /* Pointer Version Is:
   * while(*s){
   *   if(*s == c){
   *   return s;
   *   }
   *   s++
   *   if(*s == '\0'){
   *   return s;
   *   }
   *
   *   return NULL;
   * }*/
}
