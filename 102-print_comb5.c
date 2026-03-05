/*Author: Akpan-fred, Promise Friday
 *  * Program: WinMingle Community C Training
 *   * Description: This program prints two numbers having two digits between 0-99
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
   int x, y;
   for (x = 0; x <= 98; x++){
    for (y = 0; y <= 99; y++){
      putchar('0' + (x / 10));
	  putchar('0' + (x % 10));
	  putchar(' ');
	  
	  putchar('0' + (y / 10));
	  putchar('0' + (y % 10));

	  if(x != 98 || y != 99){
        putchar(',');
	  }
	}
   }
    putchar('\n');
	return(0);
}
