#include "main.h"
#include "main.h"
#include "main.h"

/* Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: This program convert strings to integer but manually rsther than the atoi() function in the standard library */

int _atoi(char *s){
 int i = 0;
 int sign = 1;
 int digit;
 int result = 0;

 //handles spaces
 while(s[i] == ' '){
    i++;
 }

 //handles signs
 if (s[i] == '-' || s[i] == '+'){
    if (s[i] == '-'){
     sign = -1;
	 i++;
	}
	else { 
		i++;
	} 
 }

 //builds the numbers just like atoi in the standard library
 
 while (s[i] >='0' && s[i] <= '9'){
    digit  = s[i] - '0';
	result = result * 10 + digit;
	i++;
 }

  return result * sign;
}
