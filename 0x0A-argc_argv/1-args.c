#include <stdio.h>

int main(int argc, char *argv[]){
     /*int count
	 (void)argv;

	for (count = 0; count < argc; count++){
	}  This is not really necessary
	printf("%d\n", count); */
   
/*	int count = 0;
	(void)argv; 

	 while(count < argc){
   count++;
	 }
	
	 printf("%d\n", count);. this too is unneccesary since we can just do*/

	(void) argv;

	printf("%d\n", argc);

	return(0);
}
