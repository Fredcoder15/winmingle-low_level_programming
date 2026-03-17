#include "main.h"
int add(int a,  int b){
    int  result;
	result = a + b;
    
	if (result < 10){
    _putchar(result + '0');
	}

/*	else  if (result > 10){
     _putchar((result / 10) + '0');
	 _putchar((result % 10) + '0');
	}
*/
	return (result);
	_putchar('\n');
}
