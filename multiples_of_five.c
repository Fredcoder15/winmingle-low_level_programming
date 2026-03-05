/*Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 *  Description: 
 */
#include <stdio.h>
#include <stdlib.h>
int main(void){
	int i;
     for (i = 5; i <= 500 ; i+=5){
         printf("%d",i);
		 if (i !=500 ){
			 printf(",");
		 }
		 else {
			 printf(".");
		 }
	 }
	 printf("\n");
	 return(0);
}
