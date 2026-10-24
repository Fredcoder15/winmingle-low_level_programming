#include "main.h"
/**
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Checks if input is an integer character or not
*/

int _isdigit(int c)
    {
	if(c >= '0' && c <= '9')
		{
			return(1);
		}
	else
	{
		return(0);
	}
    }
