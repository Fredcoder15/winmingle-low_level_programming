#include "main.h"
/* Author: Akpan-fred, Promise Friday
 *  * Program: WinMingle Community C Training
 *   * Description: This program takes in integer value but prints them as ASCII characters number values */
void print_number(int n){
   if (n<0){
   _putchar('-');//prints the negative sign
				 //next line convert the negative number to positive one
   n = -n;
   }
 
   if(n / 10){
     print_number(n / 10); 
   }
     _putchar((n % 10) + '0' );
}
