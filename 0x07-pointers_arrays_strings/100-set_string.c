
/**
 * Author: Akpan-fred, Promise Friday
 * Program: WinMingle Community C Training
 * Description: Sets a pointer to point to another string.
 */
#include "main.h"

/**
 * set_string - sets the value of a pointer to a string
 * @s: pointer to the pointer that will be changed
 * @to: string to point to
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
    {
    *s = to;
    }
