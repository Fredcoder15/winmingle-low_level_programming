#include <stdio.h>
#include <stdlib.h>
int main(void){
    unsigned long int x = 1,  y = 2, next;
	int count;

	printf("%lu, %lu", x, y);

	for(count = 3; count <= 50; count++){
		next = x + y;
		printf(", %lu", next);
		x = y;
		y = next;
	}
   printf("\n");
   return(0);	
}
