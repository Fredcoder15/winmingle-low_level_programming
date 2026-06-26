#include "main.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size){

char *old_mem;
char *new_mem;

unsigned int i;
unsigned int min_size;

if(new_size == old_size){
  return (ptr);
}

if(ptr == NULL){
  return (malloc(new_size));
}

if(new_size == 0){
  free(ptr);
  return(NULL);
}

new_mem = malloc(new_size);

if(new_mem == NULL){
 return (NULL);
}

old_mem = (char *)ptr;

if (old_size < new_size){
   min_size = old_size;
}

else (min_size = new_size);

for (i = 0; i < min_size; i++){
   new_mem[i] = old_mem[i];
}

   free(ptr);

   return (new_mem);
}

