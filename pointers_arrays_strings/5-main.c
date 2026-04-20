#include "main.h"
int main(void){
	int i=0;
	int j=0;
 char str[ ] = "My School";
 char statement[] = "The original string is:";

 while (statement[i]){
	_putchar(statement[i]);
	i++;
 }
   _putchar('\n');
   _putchar('\n');

 while (str[j]){
   _putchar(str[j]);
   j++;
 }

 _putchar('\n');
 _putchar('\n');

 rev_string(str);

 j = 0;

 while(str[j]){
   _putchar(str[j]);
   j++;
 }
   
 _putchar('\n');
 return(0);
 
}
