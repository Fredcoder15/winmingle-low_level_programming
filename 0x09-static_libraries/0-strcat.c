#include "main.h"

/* Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: This program joins one string to another */

char *_strcat(char *dest, char *src){
  char  *start = dest;

     while(*dest != '\0'){
      dest++;
	 }

	 while(*src != '\0'){
       *dest = *src;
	   src++;
	   dest++;
	 }

	 *dest = '\0';
	 return start;
}
