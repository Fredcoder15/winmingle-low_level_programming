#include <stdio.h>
#include <stdlib.h>

/*Author:Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 *  Description: This program prints letters of the alphabet fron a to z with an exception of e and q
 */
int main(void){
     char x='a';
	 
	 while(x<='z'){
		 if(x!='e' && x!='q'){
          putchar(x);
		 }
		 x++;
	 }
		 putchar('\n');
		 return(0);
}
