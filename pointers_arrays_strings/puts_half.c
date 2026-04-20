#include "main.h"
void puts_half(char *str){
int i = 0;

while(*str){
  if (i < 5){

   i++;
   str++;
   continue;

  }
   _putchar(*str);
  str++;
  i++;
}
  _putchar('\n');
}
