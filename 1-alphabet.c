#include "main.h"
/*Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: This prints to tge screen alphabet in lowercase
 */

void print_alphabet (void){
    char r='a';
		while (r<='z'){
        _putchar(r);
		r++;
		}
      _putchar('\n');
}
int main (void){
	print_alphabet();
return(0);
}
