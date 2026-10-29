#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Converts selected letters into leet speak.
 */
char *leet(char *s)
    {
    char letters[] = "aAeEoOtTlL";
    char numbers[] = "4433007711";
    int i;
    int j;

    for(i = 0; s[i] != '\0'; i++)
    {
	for(j = 0; letters[j] != '\0'; j++)
	{
		if(s[i] == letters[j])
		{
			s[i] = numbers[j];
		}
	}
    }

    return (s);
    }
