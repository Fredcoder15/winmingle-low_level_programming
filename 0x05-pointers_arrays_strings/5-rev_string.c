#include "main.h"

/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Reverses a string in place.
 */

/**
 * rev_string - Reverses a string.
 * @s: The string to reverse.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	/* Using indexing 
    int start;
    int end;
    char temp;

    start = 0;
    end = _strlen(s) - 1;

    while (start < end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    */

    /* Using pointers method*/
    char *start, *end;
    char temp;  /* If you make temp a pointer too, you will only be changing the addresses the pointers hold and not swapping the characters themselves*/

    start = s; /* Points to whatever the first character us */
    end = s;

    while(*end != '\0')
    {
    end++;	/* Goes to the end of the string, the null terminator. */
    }
    end--;	/* Moves one step backwards step */

    /* Now we do the swapping*/
    while(end > start)
    {
    temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
    }
    _putchar('\n');
}
