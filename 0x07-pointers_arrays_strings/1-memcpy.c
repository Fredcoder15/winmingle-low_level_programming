#include "main.h"
/* Author: Akpan-fred, Promise Friday
 *  * Program: WinMingle Community C Training
 *   * Description: This program copies a memory data to another area(array called buffer but starts from position 50) */

char *_memcpy(char *dest, char *src, unsigned int n){
     unsigned int i = 0;
	 while (i < n){
     dest[i] = src[i];
	 i++;
	}
	 /*Pointer version
	  * while(i < n){
	  * *dest = *src;
	  * dest++;
	  * src++;
	  * i++;
	  * }
	  * return dest-n;*/
	 return dest;
}
