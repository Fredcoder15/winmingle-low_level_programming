#include "main.h"
void puts2(char *str){
	int i= 0; 

 while(*str){

     if (i % 2 == 0){

      _putchar(*str);

	 }

     str++;
	 i++;
 }
 _putchar('\n');
} 
