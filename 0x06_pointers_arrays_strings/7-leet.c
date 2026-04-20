#include "main.h"
/* Author: Akpan-fred, Promise Friday
* Program: WinMingle Community C Training
 * Description: This program converts each character to a leet speak character*/

char *leet (char *s){
 char letters[] = "aAeEoOtTlL";
  char numbers[] = "4433007711";
/*  int i = 0;
  

  while(s[i]){
	  int j = 0; 
     while(letters[j]){
		 if( s[i] == letters[j]){
        s[i] = numbers[j];
		 }
		 j++;
	 }
	  i++;
  }*/

  // while loop was one way to go about it

  // The for loop is the second way

 int i, j;
 for (i = 0; s[i] != '\0'; i++){
    for (j = 0; letters[j] != '\0'; j++){
     if (s[i] == letters[j]){
       s[i] = numbers[j];
	   break;
	 }
	}
 }
	return s; 
}
