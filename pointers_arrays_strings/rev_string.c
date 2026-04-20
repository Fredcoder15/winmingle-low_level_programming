#include "main.h"

void rev_string(char *s){
    char *start = s;

	char *end = s;

	while(*end){
     end++; /* Moves to end of string which is null character*/
	}
	end--; /*Moves one step backwards to the last character of the string*/

	while(end > start){

      char temp = *start;

	    *start = *end;

	 *end = temp;
	
	 start++;
	  end--;
	  
	}
}
