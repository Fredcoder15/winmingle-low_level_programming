#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>


int main(void){
  int sum = 0;
  int target = 2772;
  char c;
  char charset[ ] =
	  "abcdefghijklmnopqrstuvwxyz"
	  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	  "0123456789"
	  "@#$_&*";

   int charset_size = sizeof(charset) - 1;
  srand(time(NULL));
     
	  while(sum < target){
		  c = charset[rand() % charset_size];

      if (sum + c <= target){
    _putchar(c);

	sum+=c;
	  }

	  if(sum + c == target){
        printf("\n");
	  }
	  }
	  return(0);
}
