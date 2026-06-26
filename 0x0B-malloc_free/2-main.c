#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int main(void){
char *s = str_concat("Win", "Mingle");
 
if (!s) { 
		printf("failed\n"); 
		return 1;
	}
	    printf("%s\n", s);

		free(s);

		return 0;
}
