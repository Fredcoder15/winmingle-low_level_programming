#include "main.h"
#include <stdlib.h>

/*
*Author: Akpan-fred, Promise Friday
*Program: Winmingle Community C Training
*Description: Joins two strings together and null-terminates it.
*/

char *str_concat(char *s1, char *s2)
{
    int len1 = 0;
    int len2 = 0;
    char *new_string;

    if(s1 == NULL)
    {
    return(NULL);
    }
    if(s2 == NULL)
    {
    return(NULL);
    }

    /* Calculates the length of string 1*/
    while(s1[len1] != '\0')
    {
    len1++;
    }
    /* Calculates the length of string 2*/
    while(s2[len2] != '\0')
    {
    len2++;
    }

    /* mallocs for both length including the null terminator*/
    new_string = malloc((len1 + len2 + 1) * sizeof(char));
    if(new_string == NULL)
    {
    return(NULL);
    }
    /*returning back to zero because they were no longer zeroes.Very important. */
    /* the catenation starts here*/
    len1 = 0;
    len2 = 0;
    /* The catenation happens here */
    while(s1[len1] != '\0')
    {
    new_string[len1] = s1[len1];
    len1++;
    }
    while(s2[len2] != '\0')
    {
    new_string[len1 + len2] = s2[len2];
    len2++;
    }
    /* Null terminate the new string */
    new_string[len1 + len2] = '\0';
    return(new_string);
}

