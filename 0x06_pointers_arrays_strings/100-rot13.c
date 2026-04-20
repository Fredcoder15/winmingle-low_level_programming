#include "main.h"
/* Author: Akpan-fred, Promise Friday
 *  * Program: WinMingle Community C Training
 *   * Description: This program rotates each character in a string 13places ahead */

char *rot13(char *s){
 char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

 char s2[] = "MNOPQRSTUVWXYZABCDEFGHIJKLmnopqrstuvwxyzabcdefghijkl";
   
/* int i,j;

 for (i = 0; s[i] != '\0'; i++){
   for (j = 0; s1[j] != '\0'; j++){
    if (s[i] == s1[j]){
     s[i] = s2[j];
	 break;
	}
   }
 }
*/
 //Trying out the while loop
int i = 0;
	while (s[i]){
     int j = 0;

	 while(s1[j]){

  if (s[i] == s1[j]){
  s[i] = s2[j];
  break;
  }
		 j++;
	 }
		i++;
	}
 return s;
}
