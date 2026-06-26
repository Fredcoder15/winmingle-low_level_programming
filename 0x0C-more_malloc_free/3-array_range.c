#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max){
 int *arr;
 int i;
 int size;

 if(min > max){
   return(NULL);
 }
 
 size = max - min + 1;

 arr = malloc(size * sizeof(int));

 if (arr == NULL){
   return (NULL);
 }

 i = 0;

 while(i < size){
     arr[i] = min + i;
	 i++;
 }

 return (arr);
}
