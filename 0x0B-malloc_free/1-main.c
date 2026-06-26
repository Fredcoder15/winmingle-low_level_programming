#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
char *s = _strdup("Winmingle Software Engineering Program");

if (!s){
   printf("memory allocation failed\n");
   return(1);
}

  printf("%s\n", s);

  free(s);

  return(0);
}
