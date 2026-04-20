#include "main.h"

char *string_toupper (char *s){
    int i = 0;
	while(s[i] != '\0'){
      if(s[i] >= 'a' && s[i] <= 'z'){
      s[i] = s[i] - 32;
	  }
	  i++;
	 }
	return s;
}

/* Pointer Version is
 * char *string_toupper(char *s){
 *   char *start = s //(stores the original beginning of string)
 *
 *   while (*s) {
 *  if(*s >= 'a' && *s <= 'z'){
 *  *s = *s - 32;
 *  }
 *  s++; //now pointer is now at the end of the string, pointing to null character '\0'
 *   }
 *   return start; // donot return because it is no longer the beginning of the string, start is 
 * }
