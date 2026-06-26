#include "main.h"
#include <stdlib.h>

char *_strdup(char *str){
int i = 0;
int len = 0;
char *copy;

if(str  == NULL){
  return (NULL);
}

while(str[len] != '\0'){
    len++;
}
  
//+1 accounting for the null terminator
copy = malloc((len + 1) * sizeof(char));

//copy the string literal ROM memory into the HEAP modifiable memory.

while(i < len){
   copy[i] = str[i];
   i++;
}
    /* Alternatively;Pointer version
	 * *start = copy(this stores the original address of the new heap memory because during pointer movement, copy will be pointing to null terminator and we must return the beginning chsracter address. 
	 * while(*str){
	 * *copy = *str;
	 * str++;
	 * copy++;
	 * }*/

   copy[len]  = '\0';
   return copy;
}
