#include <stdio.h>
#include <stdlib.h>
/* i am wrapping my head around how to jointly print in both cases concatenated
 */
int main (void){
     char x='a';
	while (x<='m'){
     putchar(x);
	 x++;
	}

	 x='N';
	while (x<='Z'){
     putchar(x);
	 x++;
	}
	putchar('\n');
return(0);
}
