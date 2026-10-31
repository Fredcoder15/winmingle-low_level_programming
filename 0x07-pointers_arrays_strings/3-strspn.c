
/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Counts the initial characters belonging to an accepted set.
 */
#include "main.h"

/**
 * _strspn - gets the length of a prefix consisting of accepted characters
 * @s: string to examine
 * @accept: string containing accepted characters
 *
 * Return: number of accepted characters at the beginning of s
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while (s[i] != '\0')
    {
	j = 0;
	while(accept[j] != '\0')
	{
		if(s[i] == accept[j])
		{
			break;
		}
		j++;
	}
	if(accept[j] == '\0')
	{
		break;
	}

	i++;
    }

    return(i);
}

