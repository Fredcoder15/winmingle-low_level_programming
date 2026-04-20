#include "main.h"
#include <stdio.h>

char *_strncat(char *dest, char *src, int n){
 char *start = dest;
 int i= 0;

 while(*dest != '\0'){
   dest++;
 }

 while(*src != '\0' && i < n){
   *dest = *src;
   dest++;
   src++;
   i++;
 }
   *dest = '\0';
   return start;
}

