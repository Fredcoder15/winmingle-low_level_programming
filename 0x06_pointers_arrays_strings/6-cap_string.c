#include "main.h"

/* Author: Akpan-fred, Promise Friday
  * Program: WinMingle Community C Training
   * Description: This program capitalizes the first of every word of a sentence. */
char *cap_string(char *s){
    char sep[] = " \t\n,.&';!?(){}_-";
	int i = 0;
	while(s[i]){
   if (i == 0 && s[i] >= 'a' && s[i] <= 'z'){
      s[i] -= 32;

   }
   
   if (i > 0){
    int j = 0;

	while(sep[j]){
       if (s[i-1] == sep[j] && s[i] >= 'a' && s[i] <= 'z'){
    s[i] -= 32;
	   }

	j++;
	}
   }

   i++;
	}
	return s;
}
