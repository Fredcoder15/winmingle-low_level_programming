#include "main.h"
#include <stdio.h>

void simple_print_buffer(char *buffer, unsigned int size){
	unsigned int i;
   for(i=0; i < size ; i++){
   if (i % 10){
    printf(" ");
   }

   if (!(i % 10)){
    printf("\n");
   }
   printf("0x%02x", buffer[i]);
   }

}

int main(void){
 char buffer[98] = {35};
 char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

 simple_print_buffer(buffer, 98);
 _memcpy(buffer + 50, buffer2, 10);
 printf("-------------------------------------------------\n");
simple_print_buffer(buffer, 98);
  return (0);
}
