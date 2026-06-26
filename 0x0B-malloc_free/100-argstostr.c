#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *argstostr(int ac,char **av){
int i, j, k = 0;
char *str;
int size = 0;

if(av == 0 || av == 0){
    return (NULL);
}

//Calculating size to know how many strings i jeed in the memory

for (i = 0; i < ac; ++i){
    for (j = 0; av[i][j]; ++j){
      size++;
	}
	size++; // for the \n new line
}

  size++; // for the null terminator '\0'

str = malloc(size * sizeof(char));

if(str == NULL){
  return (NULL);
}

//copying the characters now

for (i = 0; i < ac; ++i){
  for (j = 0; av[i][j]; ++j){
       str[k] = av[i][j];
	   k++;
  }
}

str[k] = '\0';

return(str);
}
