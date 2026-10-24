#include "main.h"
/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Checks if a character is uppercase or not.
*/

int _isupper(int c)
  { 
    if(c >= 'A' && c <= 'Z')
    {
	 return(1);
    }
    else
    {
         return(0);
    }

  }
