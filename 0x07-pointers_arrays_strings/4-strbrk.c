#include "main.h"
#include <stddef.h>
/* Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
  * Description: This program searches the first matched character in a string * */

char *_strpbrk(char *s, char *accept)
    {
    unsigned int i;
    unsigned int j;

    i = 0;
    while(s[i] != '\0')
    {
    j = 0;
    if(s[i] == accept[j])
    {
	return(&s[i]);
    }

    i++;
    }

    return(NULL);
    }
