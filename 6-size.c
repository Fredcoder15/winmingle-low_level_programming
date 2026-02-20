#include <stdio.h>
/* Author: Akpan-fred, Promise Friday
 * Program:WinMingle Community C Training
 * Description: This C program checks for the sizes of data types on a device memory
 */

int main(void){
     printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(char));
     printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(int));
	 printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(long int));
	 printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(long int));
	 printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(float));
     return (0);
	}
