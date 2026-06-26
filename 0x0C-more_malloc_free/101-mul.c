#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int is_digit(char *s){
    int i;

	for(i = 0; s[i] != '\0'; i++){
      if(s[i] < '0' || s[i] > '9'){
         return (0);
	  }
	}

	return (1);
}

int _strlen(char *s){
   int i = 0;
   while(s[i]){
    i++;
   }
   return (i);
}

void error(void){
 printf("Error\n");
 exit(98);
}

int main(int argc, char *argv[]){
char * num1, *num2;
int len1,len, len2, i, j, digit1, digit2;
int p1,sum, p2, started;
int *result;

if (argc != 3){
   error();
}

if (!is_digit(argv[1]) || !is_digit(argv[2])){
    error();
}

num1 = argv[1];
num2 = argv[2];

len1 = _strlen(argv[1]);
len2 = _strlen(argv[2]);

len = len1 + len2;

result = malloc(sizeof(int) * len);

if(result == NULL){
   exit(98);
}

for(i = 0; i < len; i++){
   result[i] = 0;
}

for(i = len1 - 1; i >= 0; i--){
    digit1 = num1[i] - '0';

	for(j = len2 - 1; j >= 0; j--){
      digit2 = num2[j] - '0';
	  p1 = i + j;
	  p2 = i + j + 1;

	  sum = digit1 * digit2 + result[p2];

	  result[p2] = sum % 10;
	  result[p1] += sum / 10;
	}

}

started = 0;

for (i = 0; i < len; i++){
    if(result[i] != 0){
      started = 1;
	}

	if(started){
     _putchar(result[i] + '0');
	}

}

if(!started){
  _putchar('0');
}

_putchar('\n');

free(result);

return(0);


}
