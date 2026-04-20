#include "main.h"

#include <stdlib.h>
#include <stdio.h>

int main(void){
   char str[ ] = "  98, -402, -98, 2147483, 0, 402, 98, 402";
   int i = 0;

   while (str[i] != '\0'){
   if ((str[i] >= '0' && str[i] <= '9') ||(str[i] == '-' || str[i] == '+') && (str[i+1] >='0' && str[i+1] <= '9')){
	   
	   //atoi prints the number 
	   printf("The integer here is %d\n", _atoi(&str[i]));
	   i++;
       
	 //skips the remaining digits of the number 
	 while(str[i] >= '0' && str[i] <= '9'){
        i++;
	 }
			   }
	else {
     i++;
	}
			   }
 return(0);
}
