#include "main.h"
#include <stdio.h>

int main(void){
	char *result;
   char src[ ] = "First, solve the problem. Then, write the code";

   char dest[100];

   _strcpy(dest, src);

   result = _strcpy(dest, src);

   printf("%s\n", src);

   printf("%s\n", _strcpy(dest, src));

   printf("%s\n", result);

   printf("%s\n", dest);

   return(0);
}

