#include "main.h"

int _strlen(char  *str){
 int  i = 0;

  while(str[i]){
    i++;
  }
  return(i);
}

void print_rev(char *str){
	int len =_strlen(str);
	int i;
 
	for(i= len -1; i>=0; i--){
     _putchar(str[i]);
	}
	_putchar('\n');
}
