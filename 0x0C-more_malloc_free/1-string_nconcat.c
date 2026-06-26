#include "main.h"
#include <stdlib.h>

int _strlen(char *s){
  int i =0;
  while(s[i]){
    i++;
  }
   return (i);
}




char *string_nconcat(char *s1, char *s2, unsigned int n){
char *new;
unsigned int i = 0;
unsigned int j = 0;
unsigned int len1;
unsigned int len2;
  
if(s1 == NULL || s2 == NULL){
    printf("");
}

len1 = _strlen(s1);
len2 = _strlen(s2);

if(n >= len2){
  n = len2;
}

new = malloc(len1 + n + 1);

if(new == NULL){
   exit(98);
}

while(s1[i]){
   new[i] = s1[i];
   i++;
}

while(s2[j] && j < n){
     new[i + j] = s2[j];
	 j++;
}

new[i + j] = '\0';

if (new == NULL){
   exit(98);
}

  return (new);
}
