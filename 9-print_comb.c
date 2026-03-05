/*Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 *  Description: This print single digit numbers with column and spaces
 */
#include <stdio.h>
#include <stdlib.h>
int main(void){
     int b=0;
	 while(b<=9){
      printf("%d", b);

	  if(b!=9){
		  printf(", ");
	  }
	  b++;
	 }
	 printf("\n");
    
	 b=1;
	 while (b <=100 ){
      printf("%i", b);
	  if (b !=100 ){
		  printf(", ");
	  }
	  b++;
	 }
	 printf("\n");
	 return(0);
}
