#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Capitalizes the first letter of each word.
 */
char *cap_string(char *s)
    {
    char separators[] = " \t\n,;.!?\"(){}";
    int i = 0;
    int j;
    
    while(s[i] != '\0')
    {
    if(i == 0 && s[i] >= 'a' && s[i] <= 'z')
    {
	s[i] = s[i] - 32;
    }
    else if(i > 0)
    {
	for(j = 0; separators[j]; j++)
	{
		if(s[i - 1] == separators[j])
		{
			if(s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		break;
	}
    }

    i++;
    }

    return (s);
    }
