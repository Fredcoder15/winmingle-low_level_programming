#include "main.h"
/* Author: Akpan-fred, Promise Friday
* Program: WinMingle Community C Training
 * Description: This program returns the number of characters found in another string as prefix*/

unsigned int _strspn(char *s, char *accept){
   unsigned int i = 0;
   unsigned int j;

   while(s[i]){
    j = 0;

	while (accept[j]){
     if (s[i] == accept[j]){
        break;
	 }
	 j++;
	}

	if(accept[j] == '\0'){
	break;
	}

	i++;
   }

   return i;
}
